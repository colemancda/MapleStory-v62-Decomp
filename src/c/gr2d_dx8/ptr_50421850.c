/* ptr_50421850 - 0x50421850 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ptr_50421850(float *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  
  fStack_40 = param_4 * _DAT_5043a170;
  fStack_3c = param_3 * fRam5043a174;
  fStack_38 = param_2 * fRam5043a178;
  fStack_34 = DAT_5043a180 * fRam5043a17c;
  FUN_504292c0((uint *)&fStack_40,(uint *)&fStack_40,(uint *)&fStack_30);
  fVar1 = (float)((uint)(fStack_40 * fStack_28 * fStack_3c) ^ uRam5043a164);
  fVar2 = (float)((uint)(fStack_30 * fStack_38 * fStack_3c) ^ uRam5043a168);
  fVar3 = (float)((uint)(fStack_40 * fStack_38 * fStack_3c) ^ uRam5043a16c);
  *param_1 = fStack_30 * fStack_28 * fStack_3c +
             (float)((uint)(fStack_40 * fStack_38 * fStack_2c) ^ _DAT_5043a160);
  param_1[1] = fStack_30 * fStack_38 * fStack_2c + fVar1;
  param_1[2] = fStack_40 * fStack_28 * fStack_2c + fVar2;
  param_1[3] = fStack_30 * fStack_28 * fStack_2c + fVar3;
  return;
}


