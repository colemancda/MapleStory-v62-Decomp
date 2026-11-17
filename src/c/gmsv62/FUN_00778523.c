/* FUN_00778523 - 0x00778523 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00778523(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  int *piVar3;
  int unaff_EBP;
  int *piStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int local_2c;
  
  FUN_00879bb8();
  iVar2 = DAT_00978368;
  iVar1 = *(int *)(DAT_00978368 + 0x2cac);
  *(int *)(unaff_EBP + -0x14) = DAT_00978368;
  if ((iVar1 != 0) &&
     (piStack_3c = *(int **)(iVar2 + 0x2cb8), *piStack_3c == *(int *)(iVar2 + 0x2088))) {
    local_2c = 0;
    iStack_30 = 0;
    iStack_34 = 0;
    iStack_38 = 0;
    *(int ***)(unaff_EBP + -0x18) = &piStack_3c;
    FUN_00679d22(&piStack_3c,0xc9c);
    iVar1 = FUN_007db791();
    if (iVar1 == 6) {
      piVar3 = (int *)(extraout_ECX + 0x90);
      iVar1 = 0;
      *(int **)(unaff_EBP + -0x18) = piVar3;
      do {
        iVar1 = iVar1 + 1;
        iStack_30 = unaff_EBP + -0x10;
        iStack_34 = 0x7785a8;
        local_2c = iVar1;
        FUN_008569e9();
        local_2c = *piVar3;
        if (*piVar3 == 0) {
          local_2c = DAT_00980dfc;
        }
        iStack_30 = DAT_00980dfc;
        if (*(int *)(unaff_EBP + -0x10) != 0) {
          iStack_30 = *(int *)(unaff_EBP + -0x10);
        }
        iStack_34 = 0x7785c6;
        iVar2 = FUN_008858f0();
        if (iVar2 != 0) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          local_2c = 0x778617;
          FUN_00414ebb();
          local_2c = 0;
          iStack_30 = extraout_ECX + 0xa0;
          *(int **)(unaff_EBP + -0x14) = &local_2c;
          iStack_34 = 0x77862c;
          FUN_00414f8b();
          iStack_34 = extraout_ECX + 0x9c;
          *(int **)(unaff_EBP + -0x1c) = &iStack_30;
          *(undefined4 *)(unaff_EBP + -4) = 1;
          iStack_38 = 0x778645;
          FUN_00450368();
          iStack_38 = extraout_ECX + 0x98;
          *(int **)(unaff_EBP + -0x20) = &iStack_34;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          piStack_3c = (int *)0x77865b;
          FUN_00450368();
          piStack_3c = (int *)(extraout_ECX + 0x94);
          *(int **)(unaff_EBP + -0x24) = &iStack_38;
          *(undefined1 *)(unaff_EBP + -4) = 3;
          FUN_00450368();
          *(int ***)(unaff_EBP + -0x28) = &piStack_3c;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          FUN_00450368(*(undefined4 *)(unaff_EBP + -0x18));
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          FUN_00429303();
          FUN_004eadc0();
          goto LAB_00778693;
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        local_2c = 0x7785d8;
        FUN_00414ebb();
        piVar3 = piVar3 + 1;
      } while (iVar1 < 5);
      local_2c = 0;
      iStack_30 = 0;
      iStack_34 = 0;
      iStack_38 = 0;
      *(int ***)(unaff_EBP + -0x18) = &piStack_3c;
      FUN_00679d22(&piStack_3c,0xc96);
      FUN_007db3ad();
    }
  }
LAB_00778693:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


