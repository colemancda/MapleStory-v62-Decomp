/* FUN_00604c52 - 0x00604c52 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00604c52(void)

{
  uint uVar1;
  int iVar2;
  int *extraout_ECX;
  int unaff_EBP;
  uint auStack_30 [5];
  
  FUN_00879bb8();
  auStack_30[0] = extraout_ECX[1];
  if ((-1 < (int)auStack_30[0]) && ((int)auStack_30[0] < 10)) {
    if (*extraout_ECX == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(*extraout_ECX + -4);
    }
    if (auStack_30[0] < uVar1) {
      auStack_30[4] = 0;
      auStack_30[3] = 0;
      auStack_30[2] = 0;
      auStack_30[1] = 0;
      *(uint **)(unaff_EBP + -0x10) = auStack_30;
      FUN_00679d22(auStack_30,0xeeb);
      iVar2 = FUN_007db791();
      if (iVar2 == 6) {
        auStack_30[4] = 0;
        auStack_30[3] = 0;
        auStack_30[2] = 0x3d;
        auStack_30[1] = 0x604cc1;
        FUN_0060142b();
        auStack_30[4] = 5;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        auStack_30[3] = 0x604cce;
        FUN_00457cda();
        auStack_30[4] = **(undefined4 **)(*extraout_ECX + 4 + extraout_ECX[1] * 8);
        auStack_30[3] = 0x604ce1;
        FUN_00457d37();
        auStack_30[4] = unaff_EBP + -0x20;
        auStack_30[3] = 0x604cf0;
        FUN_004751b2();
        *(undefined4 *)(extraout_ECX[3] + 0xf8) = 1;
        auStack_30[4] = 0;
        auStack_30[3] = 0x604d06;
        FUN_00609358();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        auStack_30[4] = 0x604d12;
        FUN_0045ebca();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


