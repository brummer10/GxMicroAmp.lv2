// generated from file './/MicroAmp.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace MicroAmp {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fVec0[2];
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fRec2[2];
	double 	fRec1[4];
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "MicroAmp";
	name = N_("MicroAmp");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<4; i++) fRec1[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	fConst0 = min(1.92e+05, max(1.0, (double)fSamplingFreq));
	fConst1 = double(fConst0);
	fConst2 = (3.6085058724483e-15 * fConst1);
	fConst3 = (2.18244646525169e-09 + (fConst1 * (6.85517923133814e-10 + fConst2)));
	fConst4 = (1.94859317112208e-17 * fConst1);
	fConst5 = (1.57642532490471e-10 + (fConst1 * (3.70333231165881e-12 + fConst4)));
	fConst6 = (3.44648499307587e-15 * fConst1);
	fConst7 = (6.54727392301649e-10 - fConst6);
	fConst8 = (1.86110189626097e-17 * fConst1);
	fConst9 = (7.68657291508928e-11 - fConst8);
	fConst10 = ((fConst1 * (6.85517923133814e-10 - fConst2)) - 2.18244646525169e-09);
	fConst11 = ((fConst1 * (3.70333231165881e-12 - fConst4)) - 1.57642532490471e-10);
	fConst12 = (1.08255176173449e-14 * fConst1);
	fConst13 = ((fConst1 * (fConst12 - 6.85517923133814e-10)) - 2.18244646525169e-09);
	fConst14 = (5.84577951336625e-17 * fConst1);
	fConst15 = ((fConst1 * (fConst14 - 3.70333231165881e-12)) - 1.57642532490471e-10);
	fConst16 = (2.18244646525169e-09 + (fConst1 * (0 - (6.85517923133814e-10 + fConst12))));
	fConst17 = (1.57642532490471e-10 + (fConst1 * (0 - (3.70333231165881e-12 + fConst14))));
	fConst18 = (0.7816435576535665 / fConst0);
	fConst19 = (1 - fConst18);
	fConst20 = (1.0 / (1 + fConst18));
	fConst21 = (1.03394549792276e-14 * fConst1);
	fConst22 = (fConst21 - 6.54727392301649e-10);
	fConst23 = (5.58330568878291e-17 * fConst1);
	fConst24 = (fConst23 - 7.68657291508928e-11);
	fConst25 = (0 - (6.54727392301649e-10 + fConst21));
	fConst26 = (0 - (7.68657291508928e-11 + fConst23));
	fConst27 = (6.54727392301649e-10 + fConst6);
	fConst28 = (7.68657291508928e-11 + fConst8);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
	double 	fSlow0 = (6.3889997725521416e-06 * (exp((7 * (1 - double(fslider0)))) - 1));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		double fTemp0 = (4.64350311755679e-10 + (fConst1 * (fConst5 + (fConst3 * fRec0[0]))));
		double fTemp1 = (double)input0[i];
		fVec0[0] = fTemp1;
		fRec2[0] = (fConst20 * ((fVec0[0] + (fConst19 * fRec2[1])) - fVec0[1]));
		fRec1[0] = (fRec2[0] - ((((fRec1[1] * (1.39305093526704e-09 + (fConst1 * (fConst17 + (fConst16 * fRec0[0]))))) + (fRec1[2] * (1.39305093526704e-09 + (fConst1 * (fConst15 + (fConst13 * fRec0[0])))))) + (fRec1[3] * (4.64350311755679e-10 + (fConst1 * (fConst11 + (fConst10 * fRec0[0])))))) / fTemp0));
		output0[i] = (FAUSTFLOAT)(fConst1 * (((((fRec1[0] * (1.39303700489713e-10 + (fConst1 * (fConst28 + (fConst27 * fRec0[0]))))) + (fRec1[1] * (1.39303700489713e-10 + (fConst1 * (fConst26 + (fConst25 * fRec0[0])))))) + (fRec1[2] * ((fConst1 * (fConst24 + (fConst22 * fRec0[0]))) - 1.39303700489713e-10))) + (fRec1[3] * ((fConst1 * (fConst9 + (fConst7 * fRec0[0]))) - 1.39303700489713e-10))) / fTemp0));
		// post processing
		for (int i=3; i>0; i--) fRec1[i] = fRec1[i-1];
		fRec2[1] = fRec2[0];
		fVec0[1] = fVec0[0];
		fRec0[1] = fRec0[0];
	}
#undef fslider0
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case GAIN: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   GAIN, 
} PortIndex;
*/

} // end namespace MicroAmp
