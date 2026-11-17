/* FUN_007b04b6 - 0x007b04b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_007b04b6(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  iVar1 = DAT_00978368;
  iVar2 = FUN_00455c59(unaff_EBP + -0x14);
  iVar2 = *(int *)(iVar2 + 4);
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  if ((*(int *)(iVar2 + 0x12f) == 0) &&
     (iVar2 = (**(code **)(*(int *)(extraout_ECX + 0x78) + 4))(), iVar2 == 0)) {
    iVar2 = (*DAT_0097b704)();
    if (2000 < (uint)(iVar2 - *(int *)(extraout_ECX + 0x2430))) {
      uVar3 = FUN_00679d22(unaff_EBP + -0x10,0xad6);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      FUN_00471102(uVar3,0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      uVar3 = (*DAT_0097b704)();
      *(undefined4 *)(extraout_ECX + 0x2430) = uVar3;
    }
    uVar3 = 1;
  }
  else if ((*(int *)(iVar1 + 0x2d70) == 0) &&
          (iVar2 = (**(code **)(*(int *)(extraout_ECX + 0x78) + 4))(), iVar2 == 0)) {
    iVar2 = (*DAT_0097b704)();
    uVar3 = 1;
    if (2000 < (uint)(iVar2 - *(int *)(extraout_ECX + 0x2430))) {
      uVar4 = FUN_00679d22(unaff_EBP + -0x18,0xad5);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_00471102(uVar4,0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
      uVar4 = (*DAT_0097b704)();
      *(undefined4 *)(extraout_ECX + 0x2430) = uVar4;
    }
  }
  else {
    uVar3 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}


