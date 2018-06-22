/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class otherLookAndFeel : public LookAndFeel_V4
{
public:
    void drawButtonBackground (Graphics& g, Button& button, const Colour& backgroundColour,
                               bool isMouseOverButton, bool isButtonDown) override
    {
        auto buttonArea = button.getLocalBounds() * 1.5f;
        auto edge = 3;
        
        g.setColour (Colours::red);
        g.fillRect (buttonArea);
        
        buttonArea.removeFromLeft (edge);
        buttonArea.removeFromTop (edge);
        
       
        
        //auto offset = isButtonDown ? -edge / 2 : -edge;
        //buttonArea.translate (offset, offset);
        g.setColour (Colours::beige);
        g.fillRect (buttonArea);
        
    };
    
    
};

class MainComponent   : public AudioAppComponent
{
    
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();
    

    //==============================================================================
    void prepareToPlay (int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill) override;
    void releaseResources() override;

    //==============================================================================
    void paint (Graphics& g) override;
    void resized() override;
    
    //=========
    
    

private:
    //==============================================================================
    //we need the drop down and the main window - both in main component?
    //DROPDOWN__
    //6 knobs, 2 knobs/other mode changer
    //MAIN WINDOW
    //keyboard, no knobs, buttons(8)
    
    Colour whiteKeys, blackKeys, bodyGray;
    MidiKeyboardComponent mainKeys;
    MidiKeyboardState keyState;
    otherLookAndFeel otherlookandfeel;
    TextButton topMain, top2, top3, top4, top5, top6;
    

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
