/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.3.2

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class fuee  : public Component,
              public Slider::Listener
{
public:
    //==============================================================================
    fuee ();
    ~fuee();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    std::unique_ptr<Slider> slider;
    std::unique_ptr<Slider> slider2;
    std::unique_ptr<Slider> slider3;
    std::unique_ptr<Slider> slider4;
    std::unique_ptr<Slider> slider5;
    std::unique_ptr<Slider> slider6;
    std::unique_ptr<Slider> slider7;
    std::unique_ptr<Slider> slider8;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (fuee)
};

//[EndFile] You can add extra defines here...
//[/EndFile]
