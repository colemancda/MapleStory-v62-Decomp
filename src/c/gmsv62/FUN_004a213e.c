/* FUN_004a213e - 0x004a213e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004a213e(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) < *(int *)(unaff_EBP + 0x10)) {
    iVar1 = *(int *)(extraout_ECX + 0x5c);
    iStack_14 = extraout_ECX;
    iStack_10 = -1;
    piStack_c = (int *)-1;
    if (((-1 < iVar1) && (iStack_14 = *(int *)(extraout_ECX + 0x48), iVar1 != iStack_14)) &&
       (iStack_10 = iStack_14, piStack_c = (int *)iVar1, iVar1 < iStack_14)) {
      iStack_10 = iVar1;
      piStack_c = (int *)iStack_14;
    }
    iStack_18 = extraout_ECX + 0x34;
    *(int **)(unaff_EBP + 0xc) = &iStack_14;
    uStack_1c = 0x4a218a;
    FUN_00450368();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_18 = 0x4a2196;
    FUN_00424df4();
    iStack_18 = 0x4a219d;
    iStack_18 = FUN_00424f08();
    iStack_18 = iStack_18 + *(int *)(extraout_ECX + 0x3c);
    *(undefined4 **)(unaff_EBP + 0xc) = &uStack_1c;
    FUN_0046fc23(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004a1a29();
  }
  piStack_c = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_c != (int *)0x0) {
    iStack_10 = 0x4a21cc;
    (**(code **)(*piStack_c + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


