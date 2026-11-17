/* FUN_0059173b - 0x0059173b in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_0059173b(int param_1)

{
  int in_EAX;
  int iVar1;
  int unaff_EBX;
  int unaff_EBP;
  bool in_ZF;
  int iStack_18;
  
  if (in_ZF) {
    if (DAT_00979428 == unaff_EBX) {
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(param_1 + 0x14c);
      *(undefined4 *)(unaff_EBP + -0x1c) = *(undefined4 *)(unaff_EBP + 0xc);
      iVar1 = FUN_004029b9();
      *(int *)(unaff_EBP + 0xc) = iVar1;
      *(int *)(unaff_EBP + -4) = unaff_EBX;
joined_r0x0059183e:
      if (iVar1 != unaff_EBX) {
        FUN_00591859();
      }
      goto LAB_00591849;
    }
  }
  else {
    iStack_18 = param_1;
    if (in_EAX != 1) {
      if (in_EAX == 2) {
        *(int **)(unaff_EBP + 0xc) = &iStack_18;
        FUN_00679d22(&iStack_18,0x557);
        FUN_007db3ad();
        (**(code **)(*(int *)(*(int *)(param_1 + 0x88 + *(int *)(param_1 + 0x14c) * 8) + 4) + 0x1c))
                  ();
      }
      goto LAB_00591849;
    }
    *(int **)(unaff_EBP + 8) = &iStack_18;
    FUN_00679d22(&iStack_18,0x556);
    FUN_007db3ad();
    if (DAT_00979428 == unaff_EBX) {
      *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(unaff_EBP + -0x14) = *(undefined4 *)(param_1 + 0x14c);
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(unaff_EBP + 0xc);
      iVar1 = FUN_004029b9();
      *(int *)(unaff_EBP + 0xc) = iVar1;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      goto joined_r0x0059183e;
    }
  }
  FUN_00592a9b();
LAB_00591849:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


