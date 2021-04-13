class B_762x54_Tracer_Green;

/** 7.62x54R **/
class MGVE_Ammo_762x54_Tracer_Red: B_762x54_Tracer_Green
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    tracerColor[] = {0.8,0.2,0.1,0.04};
    tracerColorR[] = {0,0,0,0};
};
class MGVE_Ammo_762x54_Tracer_Red_IR: B_762x54_Tracer_Green
{
    model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
    tracerColor[] = {0.8,0.2,0.1,0.04};
    tracerColorR[] = {0,0,0,0};
    nvgOnly = 1;
};