/* FUN_005b7348 - 0x005b7348 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005b7348(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  int aiStack_2c [5];
  
  FUN_00879bb8();
  aiStack_2c[4] = 0;
  aiStack_2c[3] = 0;
  aiStack_2c[0] = extraout_ECX + 0x6c;
  aiStack_2c[1] = 0;
  *(int **)(unaff_EBP + -0x10) = aiStack_2c;
  aiStack_2c[2] = aiStack_2c[0];
  FUN_00679d22(aiStack_2c,0x1d7);
  iVar1 = FUN_007db791();
  if (iVar1 == 6) {
    aiStack_2c[4] = 0;
    aiStack_2c[3] = 0;
    aiStack_2c[2] = 0x6f;
    aiStack_2c[1] = 0x5b738e;
    FUN_0060142b();
    aiStack_2c[4] = 0x36;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    aiStack_2c[3] = 0x5b739b;
    FUN_00457cda();
    aiStack_2c[4] = unaff_EBP + -0x20;
    aiStack_2c[3] = 0x5b73aa;
    FUN_004751b2();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    aiStack_2c[4] = 0x5b73b6;
    FUN_0045ebca();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


