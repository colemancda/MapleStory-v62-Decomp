/* FUN_0045a5e7 - 0x0045a5e7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045a5e7(void)

{
  int iVar1;
  int iVar2;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  char *pcStack_2c;
  int iStack_28;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) == 0) {
    iStack_28 = 0x99;
    pcStack_2c = (char *)0x45a60a;
    FUN_00464f0d();
  }
  else if (*(int *)(extraout_ECX + 0x18) == 0) {
    iStack_28 = 0x45a61d;
    iVar1 = FUN_007ee7a2();
    *(int *)(unaff_EBP + -0x18) = iVar1;
    if (-1 < iVar1) {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      iStack_28 = *(undefined4 *)(unaff_EBP + 8);
      pcStack_2c = (char *)(unaff_EBP + -0x24);
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_30 = 0x45a640;
      FUN_0084a5e4();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_28 = 0x45a64f;
      iStack_28 = FUN_0045e2eb();
      pcStack_2c = (char *)(unaff_EBP + -0x10);
      iStack_30 = 0x45a65f;
      FUN_0045a1d8();
      iVar1 = *(int *)(*(int *)(unaff_EBP + -0x20) + 0x20);
      iStack_28 = *(undefined4 *)(extraout_ECX + 0x3c);
      *(undefined4 *)(extraout_ECX + 0x4e4) = *(undefined4 *)(unaff_EBP + 8);
      pcStack_2c = (char *)(extraout_ECX + 0x34);
      *(undefined1 *)(unaff_EBP + -4) = 2;
      iStack_30 = 0x45a67e;
      iVar2 = FUN_00413367();
      uStack_38 = iStack_28;
      if (iVar2 < iVar1) {
        iStack_28 = 0;
        pcStack_2c = (char *)0x0;
        iStack_30 = 0;
        uStack_34 = 0;
        *(undefined4 **)(unaff_EBP + 8) = &uStack_38;
        FUN_0045f0f3(s_You_don_t_have_enough_Nexon_Game_009643cc,0xffffffff);
        FUN_007db3ad();
      }
      else {
        *(undefined4 *)(unaff_EBP + 8) = 0;
        iStack_30 = unaff_EBP + 8;
        pcStack_2c = s_You_will_spend__d_Nexon_Game_Car_00964514;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        uStack_34 = 0x45a6ba;
        iStack_28 = iVar1;
        FUN_00434e21();
        iStack_28 = 0;
        pcStack_2c = (char *)0x0;
        iStack_30 = 0;
        uStack_34 = 0;
        *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_38;
        uStack_38 = extraout_ECX_00;
        FUN_00450368(unaff_EBP + 8);
        iVar1 = FUN_007db791();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (iVar1 == 6) {
          iStack_28 = 0x45a6f0;
          FUN_00414ebb();
          iStack_28 = *(undefined4 *)(unaff_EBP + -0x18);
          pcStack_2c = *(char **)(DAT_00978368 + 0x2088);
          iStack_30 = 0x45a706;
          FUN_0045dd60();
        }
        else {
          iStack_28 = 0x45a6e9;
          FUN_00414ebb();
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_28 = 0x45a712;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (*(int *)(unaff_EBP + -0x20) != 0) {
        iStack_28 = 0;
        pcStack_2c = (char *)0x45a723;
        FUN_0045e794();
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      iStack_28 = 0x45a732;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


