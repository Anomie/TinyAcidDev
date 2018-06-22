
#include "MainComponent.h"

//==============================================================================

MainComponent::MainComponent() :
mainKeys (keyState, MidiKeyboardComponent::horizontalKeyboard)
    
{
    setLookAndFeel(&otherlookandfeel);
    
    
    double asRatio = 15.0/9.0;
    setSize(800, 800/asRatio); //480
    whiteKeys = Colour(240, 207, 171);
    blackKeys = Colour(160, 53, 74);
    
    auto area = getLocalBounds();
    
    /* unfinished, can't add
    topMain.setBounds(100, 100, 50, 50);
    topMain.setLookAndFeel(&otherlookandfeel);
    
    addAndMakeVisible(topMain);
    */

    mainKeys.setColour(MidiKeyboardComponent::blackNoteColourId, blackKeys);
    mainKeys.setColour(MidiKeyboardComponent::keySeparatorLineColourId, blackKeys.darker());
    mainKeys.setColour(MidiKeyboardComponent::whiteNoteColourId, whiteKeys);
    mainKeys.setColour(MidiKeyboardComponent::mouseOverKeyOverlayColourId, *new Colour);
   // mainKeys.setColour(MidiKeyboardComponent::shadowColourId, *new Colour);
    mainKeys.setAvailableRange(36, 48);
    mainKeys.setLowestVisibleKey(mainKeys.getRangeStart());
    mainKeys.setBounds(200, 120, 600, 250);
    mainKeys.setKeyWidth(mainKeys.getWidth() * 0.125);
    mainKeys.setBlackNoteLengthProportion(0.55);
    
    
    
    //mainKeys.setComponentEffect();
    addAndMakeVisible(mainKeys);
    //we want the keys to be a monotone color, and buttons to be on said keys
    // More variables in a color/look choice
    //drop down menu?
    
    
    setAudioChannels (0, 2);
}




MainComponent::~MainComponent()
{
    setLookAndFeel(nullptr);
    shutdownAudio();
}



    


//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
    // 
}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
    // 
    bufferToFill.clearActiveBufferRegion();
}

void MainComponent::releaseResources()
{
    
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    g.fillAll (Colours::beige.withAlpha(0.8f));
    

    // 
}

void MainComponent::resized()
{    // 
    
}
