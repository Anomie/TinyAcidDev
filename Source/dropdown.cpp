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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "dropdown.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
fuee::fuee ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    slider.reset (new Slider ("new slider"));
    addAndMakeVisible (slider.get());
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::RotaryVerticalDrag);
    slider->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider->setColour (Slider::backgroundColourId, Colour (0xff041c28));
    slider->setColour (Slider::thumbColourId, Colour (0xffe14242));
    slider->setColour (Slider::rotarySliderOutlineColourId, Colour (0xfff0e8d6));
    slider->addListener (this);

    slider->setBounds (16, 24, 150, 150);

    slider2.reset (new Slider ("new slider"));
    addAndMakeVisible (slider2.get());
    slider2->setRange (0, 10, 0);
    slider2->setSliderStyle (Slider::Rotary);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->setColour (Slider::backgroundColourId, Colour (0xff041c28));
    slider2->setColour (Slider::thumbColourId, Colour (0xffe14242));
    slider2->setColour (Slider::rotarySliderOutlineColourId, Colour (0xfff0e8d6));
    slider2->addListener (this);

    slider2->setBounds (184, 24, 150, 150);

    slider3.reset (new Slider ("new slider"));
    addAndMakeVisible (slider3.get());
    slider3->setRange (0, 10, 0);
    slider3->setSliderStyle (Slider::RotaryVerticalDrag);
    slider3->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider3->setColour (Slider::backgroundColourId, Colour (0xff041c28));
    slider3->setColour (Slider::thumbColourId, Colour (0xffe14242));
    slider3->setColour (Slider::rotarySliderOutlineColourId, Colour (0xfff0e8d6));
    slider3->addListener (this);

    slider3->setBounds (488, 16, 72, 88);

    slider4.reset (new Slider ("new slider"));
    addAndMakeVisible (slider4.get());
    slider4->setRange (0, 10, 0);
    slider4->setSliderStyle (Slider::Rotary);
    slider4->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider4->setColour (Slider::backgroundColourId, Colour (0xff041c28));
    slider4->setColour (Slider::thumbColourId, Colour (0xffe14242));
    slider4->setColour (Slider::rotarySliderOutlineColourId, Colour (0xfff0e8d6));
    slider4->addListener (this);

    slider4->setBounds (656, 16, 72, 88);

    slider5.reset (new Slider ("new slider"));
    addAndMakeVisible (slider5.get());
    slider5->setRange (0, 10, 0);
    slider5->setSliderStyle (Slider::RotaryVerticalDrag);
    slider5->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider5->setColour (Slider::backgroundColourId, Colour (0xff041c28));
    slider5->setColour (Slider::thumbColourId, Colour (0xffe14242));
    slider5->setColour (Slider::rotarySliderOutlineColourId, Colour (0xfff0e8d6));
    slider5->addListener (this);

    slider5->setBounds (488, 96, 72, 88);

    slider6.reset (new Slider ("new slider"));
    addAndMakeVisible (slider6.get());
    slider6->setRange (0, 10, 0);
    slider6->setSliderStyle (Slider::Rotary);
    slider6->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider6->setColour (Slider::backgroundColourId, Colour (0xff041c28));
    slider6->setColour (Slider::thumbColourId, Colour (0xffe14242));
    slider6->setColour (Slider::rotarySliderOutlineColourId, Colour (0xfff0e8d6));
    slider6->addListener (this);

    slider6->setBounds (656, 96, 72, 88);

    slider7.reset (new Slider ("new slider"));
    addAndMakeVisible (slider7.get());
    slider7->setRange (0, 10, 0);
    slider7->setSliderStyle (Slider::RotaryVerticalDrag);
    slider7->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider7->setColour (Slider::backgroundColourId, Colour (0xff041c28));
    slider7->setColour (Slider::thumbColourId, Colour (0xffe14242));
    slider7->setColour (Slider::rotarySliderOutlineColourId, Colour (0xfff0e8d6));
    slider7->addListener (this);

    slider7->setBounds (568, 15, 72, 88);

    slider8.reset (new Slider ("new slider"));
    addAndMakeVisible (slider8.get());
    slider8->setRange (0, 10, 0);
    slider8->setSliderStyle (Slider::RotaryVerticalDrag);
    slider8->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider8->setColour (Slider::backgroundColourId, Colour (0xff041c28));
    slider8->setColour (Slider::thumbColourId, Colour (0xffe14242));
    slider8->setColour (Slider::rotarySliderOutlineColourId, Colour (0xfff0e8d6));
    slider8->addListener (this);

    slider8->setBounds (568, 95, 72, 88);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (800, 200);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

fuee::~fuee()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    slider = nullptr;
    slider2 = nullptr;
    slider3 = nullptr;
    slider4 = nullptr;
    slider5 = nullptr;
    slider6 = nullptr;
    slider7 = nullptr;
    slider8 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void fuee::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colour (0xffcabfae));

    {
        float x = 198.0f, y = 36.0f, width = 125.0f, height = 125.0f;
        Colour fillColour1 = Colour (0xffe6dbdb), fillColour2 = Colour (0xfff5ca92);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setGradientFill (ColourGradient (fillColour1,
                                       256.0f - 198.0f + x,
                                       96.0f - 36.0f + y,
                                       fillColour2,
                                       296.0f - 198.0f + x,
                                       104.0f - 36.0f + y,
                                       true));
        g.fillEllipse (x, y, width, height);
    }

    {
        float x = 30.0f, y = 36.0f, width = 125.0f, height = 125.0f;
        Colour fillColour1 = Colour (0xffe6dbdb), fillColour2 = Colour (0xfff5ca92);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setGradientFill (ColourGradient (fillColour1,
                                       256.0f - 30.0f + x,
                                       96.0f - 36.0f + y,
                                       fillColour2,
                                       336.0f - 30.0f + x,
                                       112.0f - 36.0f + y,
                                       true));
        g.fillEllipse (x, y, width, height);
    }

    {
        float x = 670.0f, y = 36.0f, width = 42.0f, height = 44.0f;
        Colour fillColour1 = Colour (0xffe6dbdb), fillColour2 = Colour (0xfff5ca92);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setGradientFill (ColourGradient (fillColour1,
                                       256.0f - 670.0f + x,
                                       96.0f - 36.0f + y,
                                       fillColour2,
                                       296.0f - 670.0f + x,
                                       104.0f - 36.0f + y,
                                       true));
        g.fillEllipse (x, y, width, height);
    }

    {
        float x = 502.0f, y = 36.0f, width = 42.0f, height = 44.0f;
        Colour fillColour1 = Colour (0xffe6dbdb), fillColour2 = Colour (0xfff5ca92);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setGradientFill (ColourGradient (fillColour1,
                                       256.0f - 502.0f + x,
                                       96.0f - 36.0f + y,
                                       fillColour2,
                                       336.0f - 502.0f + x,
                                       112.0f - 36.0f + y,
                                       true));
        g.fillEllipse (x, y, width, height);
    }

    {
        float x = 670.0f, y = 116.0f, width = 42.0f, height = 44.0f;
        Colour fillColour1 = Colour (0xffe6dbdb), fillColour2 = Colour (0xfff5ca92);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setGradientFill (ColourGradient (fillColour1,
                                       256.0f - 670.0f + x,
                                       96.0f - 116.0f + y,
                                       fillColour2,
                                       296.0f - 670.0f + x,
                                       104.0f - 116.0f + y,
                                       true));
        g.fillEllipse (x, y, width, height);
    }

    {
        float x = 502.0f, y = 116.0f, width = 42.0f, height = 44.0f;
        Colour fillColour1 = Colour (0xffe6dbdb), fillColour2 = Colour (0xfff5ca92);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setGradientFill (ColourGradient (fillColour1,
                                       256.0f - 502.0f + x,
                                       96.0f - 116.0f + y,
                                       fillColour2,
                                       336.0f - 502.0f + x,
                                       112.0f - 116.0f + y,
                                       true));
        g.fillEllipse (x, y, width, height);
    }

    {
        float x = 582.0f, y = 36.0f, width = 42.0f, height = 44.0f;
        Colour fillColour1 = Colour (0xffe6dbdb), fillColour2 = Colour (0xfff5ca92);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setGradientFill (ColourGradient (fillColour1,
                                       256.0f - 582.0f + x,
                                       96.0f - 36.0f + y,
                                       fillColour2,
                                       296.0f - 582.0f + x,
                                       104.0f - 36.0f + y,
                                       true));
        g.fillEllipse (x, y, width, height);
    }

    {
        float x = 582.0f, y = 116.0f, width = 42.0f, height = 44.0f;
        Colour fillColour1 = Colour (0xffe6dbdb), fillColour2 = Colour (0xfff5ca92);
        //[UserPaintCustomArguments] Customize the painting arguments here..
        //[/UserPaintCustomArguments]
        g.setGradientFill (ColourGradient (fillColour1,
                                       256.0f - 582.0f + x,
                                       96.0f - 116.0f + y,
                                       fillColour2,
                                       296.0f - 582.0f + x,
                                       104.0f - 116.0f + y,
                                       true));
        g.fillEllipse (x, y, width, height);
    }

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void fuee::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void fuee::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider.get())
    {
        //[UserSliderCode_slider] -- add your slider handling code here..
        //[/UserSliderCode_slider]
    }
    else if (sliderThatWasMoved == slider2.get())
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..
        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider3.get())
    {
        //[UserSliderCode_slider3] -- add your slider handling code here..
        //[/UserSliderCode_slider3]
    }
    else if (sliderThatWasMoved == slider4.get())
    {
        //[UserSliderCode_slider4] -- add your slider handling code here..
        //[/UserSliderCode_slider4]
    }
    else if (sliderThatWasMoved == slider5.get())
    {
        //[UserSliderCode_slider5] -- add your slider handling code here..
        //[/UserSliderCode_slider5]
    }
    else if (sliderThatWasMoved == slider6.get())
    {
        //[UserSliderCode_slider6] -- add your slider handling code here..
        //[/UserSliderCode_slider6]
    }
    else if (sliderThatWasMoved == slider7.get())
    {
        //[UserSliderCode_slider7] -- add your slider handling code here..
        //[/UserSliderCode_slider7]
    }
    else if (sliderThatWasMoved == slider8.get())
    {
        //[UserSliderCode_slider8] -- add your slider handling code here..
        //[/UserSliderCode_slider8]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="fuee" componentName="" parentClasses="public Component"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="1" initialWidth="800"
                 initialHeight="200">
  <BACKGROUND backgroundColour="ffcabfae">
    <ELLIPSE pos="198 36 125 125" fill=" radial: 256 96, 296 104, 0=ffe6dbdb, 1=fff5ca92"
             hasStroke="0"/>
    <ELLIPSE pos="30 36 125 125" fill=" radial: 256 96, 336 112, 0=ffe6dbdb, 1=fff5ca92"
             hasStroke="0"/>
    <ELLIPSE pos="670 36 42 44" fill=" radial: 256 96, 296 104, 0=ffe6dbdb, 1=fff5ca92"
             hasStroke="0"/>
    <ELLIPSE pos="502 36 42 44" fill=" radial: 256 96, 336 112, 0=ffe6dbdb, 1=fff5ca92"
             hasStroke="0"/>
    <ELLIPSE pos="670 116 42 44" fill=" radial: 256 96, 296 104, 0=ffe6dbdb, 1=fff5ca92"
             hasStroke="0"/>
    <ELLIPSE pos="502 116 42 44" fill=" radial: 256 96, 336 112, 0=ffe6dbdb, 1=fff5ca92"
             hasStroke="0"/>
    <ELLIPSE pos="582 36 42 44" fill=" radial: 256 96, 296 104, 0=ffe6dbdb, 1=fff5ca92"
             hasStroke="0"/>
    <ELLIPSE pos="582 116 42 44" fill=" radial: 256 96, 296 104, 0=ffe6dbdb, 1=fff5ca92"
             hasStroke="0"/>
  </BACKGROUND>
  <SLIDER name="new slider" id="21d479334e9ae0aa" memberName="slider" virtualName=""
          explicitFocusOrder="0" pos="16 24 150 150" bkgcol="ff041c28"
          thumbcol="ffe14242" rotaryslideroutline="fff0e8d6" min="0.00000000000000000000"
          max="10.00000000000000000000" int="0.00000000000000000000" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="new slider" id="ea90c544c654fc34" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="184 24 150 150" bkgcol="ff041c28"
          thumbcol="ffe14242" rotaryslideroutline="fff0e8d6" min="0.00000000000000000000"
          max="10.00000000000000000000" int="0.00000000000000000000" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="new slider" id="2d770f58ede40d6f" memberName="slider3"
          virtualName="" explicitFocusOrder="0" pos="488 16 72 88" bkgcol="ff041c28"
          thumbcol="ffe14242" rotaryslideroutline="fff0e8d6" min="0.00000000000000000000"
          max="10.00000000000000000000" int="0.00000000000000000000" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="new slider" id="119ba913fb9ccd0a" memberName="slider4"
          virtualName="" explicitFocusOrder="0" pos="656 16 72 88" bkgcol="ff041c28"
          thumbcol="ffe14242" rotaryslideroutline="fff0e8d6" min="0.00000000000000000000"
          max="10.00000000000000000000" int="0.00000000000000000000" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="new slider" id="94ac59d25a4666d9" memberName="slider5"
          virtualName="" explicitFocusOrder="0" pos="488 96 72 88" bkgcol="ff041c28"
          thumbcol="ffe14242" rotaryslideroutline="fff0e8d6" min="0.00000000000000000000"
          max="10.00000000000000000000" int="0.00000000000000000000" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="new slider" id="aee0ff9a82920c2d" memberName="slider6"
          virtualName="" explicitFocusOrder="0" pos="656 96 72 88" bkgcol="ff041c28"
          thumbcol="ffe14242" rotaryslideroutline="fff0e8d6" min="0.00000000000000000000"
          max="10.00000000000000000000" int="0.00000000000000000000" style="Rotary"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="new slider" id="8f52123874aa823b" memberName="slider7"
          virtualName="" explicitFocusOrder="0" pos="568 15 72 88" bkgcol="ff041c28"
          thumbcol="ffe14242" rotaryslideroutline="fff0e8d6" min="0.00000000000000000000"
          max="10.00000000000000000000" int="0.00000000000000000000" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
  <SLIDER name="new slider" id="e42e5f978d37f53a" memberName="slider8"
          virtualName="" explicitFocusOrder="0" pos="568 95 72 88" bkgcol="ff041c28"
          thumbcol="ffe14242" rotaryslideroutline="fff0e8d6" min="0.00000000000000000000"
          max="10.00000000000000000000" int="0.00000000000000000000" style="RotaryVerticalDrag"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1.00000000000000000000" needsCallback="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
