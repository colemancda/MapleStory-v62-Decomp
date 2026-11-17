/* FUN_004903d4 - 0x004903d4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_004903d4(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int *piVar3;
  int unaff_EBP;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  piVar3 = (int *)(extraout_ECX + 0x16c);
  do {
    if (*(int *)(unaff_EBP + -0x14) != 0) break;
    iStack_40 = *(undefined4 *)(unaff_EBP + -0x10);
    iStack_44 = unaff_EBP + -0x3c;
    iStack_48 = 0x49040f;
    FUN_004927e9();
    iStack_40 = *(undefined4 *)(unaff_EBP + 0xc);
    iStack_44 = *(undefined4 *)(unaff_EBP + 8);
    *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x3c) + 5;
    *(int *)(unaff_EBP + -0x24) = *(int *)(unaff_EBP + -0x3c) + 0x45;
    *(int *)(unaff_EBP + -0x28) = *(int *)(unaff_EBP + -0x38) + 5;
    iStack_48 = unaff_EBP + -0x2c;
    *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x38) + 0x45;
    uStack_4c = 0x49043d;
    iVar1 = (*DAT_0097b57c)();
    if ((iVar1 != 0) && (iStack_40 = *piVar3, -1 < iStack_40)) {
      iStack_44 = unaff_EBP + -0x1c;
      iStack_48 = 0x490457;
      FUN_004903a3();
      iStack_40 = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_44 = *(undefined4 *)(unaff_EBP + 8);
      *(undefined4 **)(unaff_EBP + -0x14) = &uStack_4c;
      uStack_4c = extraout_ECX_00;
      FUN_0045e0ed(unaff_EBP + -0x1c);
      uVar2 = FUN_00493e93();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        iStack_40 = 0;
        iStack_44 = 0x49048f;
        FUN_0045e794();
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    piVar3 = piVar3 + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


