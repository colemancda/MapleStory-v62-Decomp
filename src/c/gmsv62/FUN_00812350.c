/* FUN_00812350 - 0x00812350 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00812350(void)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar3;
  uint auStack_34 [5];
  
  FUN_00879bb8();
  auStack_34[0] = *(uint *)(extraout_ECX + 0xc4);
  if (-1 < (int)auStack_34[0]) {
    if (*(int *)(extraout_ECX + 0xa8) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(uint *)(*(int *)(extraout_ECX + 0xa8) + -4);
    }
    if ((auStack_34[0] < uVar1) && (*(int *)(extraout_ECX + 0xd4) == 0)) {
      auStack_34[4] = 0;
      auStack_34[3] = 0;
      auStack_34[2] = 0;
      auStack_34[1] = 0;
      *(uint **)(unaff_EBP + -0x10) = auStack_34;
      FUN_00679d22(auStack_34,0x34b);
      iVar2 = FUN_007db791();
      if (iVar2 == 6) {
        piVar3 = (int *)(*(int *)(extraout_ECX + 0xc4) * 0x1c + *(int *)(extraout_ECX + 0xa8));
        iVar2 = *piVar3 / 1000000;
        auStack_34[4] = 0;
        auStack_34[3] = 0;
        auStack_34[2] = 0x7e;
        auStack_34[1] = 0x8123eb;
        FUN_0060142b();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        auStack_34[4] = 7;
        auStack_34[3] = 0x8123f9;
        FUN_00457cda();
        auStack_34[3] = 0x812402;
        auStack_34[4] = iVar2;
        FUN_00457cda();
        auStack_34[4] = (uint)*(byte *)(piVar3 + 2);
        auStack_34[3] = 0x812410;
        FUN_00457cda();
        auStack_34[4] = unaff_EBP + -0x20;
        auStack_34[3] = 0x81241f;
        FUN_004751b2();
        auStack_34[4] = extraout_ECX + 0xb0;
        *(undefined4 *)(extraout_ECX + 0xd4) = 1;
        *(int *)(extraout_ECX + 0xd0) = iVar2;
        auStack_34[2] = 0x81243e;
        auStack_34[3] = iVar2;
        FUN_0080ecbc();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        auStack_34[4] = 0x81244a;
        FUN_0045ebca();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


