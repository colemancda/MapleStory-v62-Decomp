/* ptr_0045a748 - 0x0045a748 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0045a748(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar4;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  char *pcStack_30;
  int iStack_2c;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) == 0) {
    iStack_2c = 0x99;
    pcStack_30 = (char *)0x45a766;
    FUN_00464f0d();
  }
  else if (*(int *)(extraout_ECX + 0x18) == 0) {
    iStack_2c = 0xffffffff;
    pcStack_30 = &DAT_00978474;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    iStack_34 = 0x45a788;
    FUN_00414edd();
    iStack_2c = unaff_EBP + -0x10;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    pcStack_30 = (char *)0x45a796;
    iVar1 = FUN_0045de83();
    if (iVar1 == 0) {
      iStack_2c = 0;
      pcStack_30 = (char *)0x0;
      iStack_34 = 0;
      uStack_38 = 0;
      *(undefined4 **)(unaff_EBP + 8) = &uStack_3c;
      uVar4 = 0xffffffff;
      uVar2 = FUN_00449713(0xffffffff);
      FUN_0045f0f3(uVar2,uVar4);
      FUN_007db3ad();
    }
    else {
      iStack_2c = 0x45a7c4;
      iVar1 = FUN_007ee7a2();
      *(int *)(unaff_EBP + -0x1c) = iVar1;
      if (-1 < iVar1) {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        iStack_2c = *(undefined4 *)(unaff_EBP + 8);
        pcStack_30 = (char *)(unaff_EBP + -0x28);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        iStack_34 = 0x45a801;
        FUN_0084a5e4();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iStack_2c = 0x45a810;
        iStack_2c = FUN_0045e2eb();
        pcStack_30 = (char *)(unaff_EBP + -0x14);
        iStack_34 = 0x45a820;
        FUN_0045a1d8();
        iVar1 = *(int *)(*(int *)(unaff_EBP + -0x24) + 0x20);
        iStack_2c = *(undefined4 *)(extraout_ECX + 0x3c);
        *(undefined4 *)(extraout_ECX + 0x4e4) = *(undefined4 *)(unaff_EBP + 8);
        pcStack_30 = (char *)(extraout_ECX + 0x34);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iStack_34 = 0x45a83f;
        iVar3 = FUN_00413367();
        uStack_3c = iStack_2c;
        if (iVar3 < iVar1) {
          iStack_2c = 0;
          pcStack_30 = (char *)0x0;
          iStack_34 = 0;
          uStack_38 = 0;
          *(undefined4 **)(unaff_EBP + 8) = &uStack_3c;
          FUN_0045f0f3(s_You_don_t_have_enough_Nexon_Game_009643cc,0xffffffff);
          FUN_007db3ad();
          *(undefined1 *)(unaff_EBP + -4) = 2;
          if (*(int *)(unaff_EBP + -0x14) != 0) {
            iStack_2c = *(int *)(unaff_EBP + -0x14) + -0xc;
            pcStack_30 = (char *)0x45a877;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 1;
          iStack_2c = 0x45a884;
          FUN_0045e46f();
        }
        else {
          *(undefined4 *)(unaff_EBP + 8) = 0;
          iStack_34 = unaff_EBP + 8;
          pcStack_30 = s_You_will_spend__d_Nexon_Game_Car_00964514;
          *(undefined1 *)(unaff_EBP + -4) = 4;
          uStack_38 = 0x45a89f;
          iStack_2c = iVar1;
          FUN_00434e21();
          iStack_2c = 0;
          pcStack_30 = (char *)0x0;
          iStack_34 = 0;
          uStack_38 = 0;
          *(undefined4 **)(unaff_EBP + -0x20) = &uStack_3c;
          uStack_3c = extraout_ECX_00;
          FUN_00450368(unaff_EBP + 8);
          iVar1 = FUN_007db791();
          *(undefined1 *)(unaff_EBP + -4) = 3;
          if (iVar1 == 6) {
            iStack_2c = 0x45a8d5;
            FUN_00414ebb();
            iStack_2c = *(undefined4 *)(unaff_EBP + -0x1c);
            pcStack_30 = *(char **)(DAT_00978368 + 0x2088);
            iStack_34 = 0x45a8eb;
            FUN_0045deef();
          }
          else {
            iStack_2c = 0x45a8ce;
            FUN_00414ebb();
          }
          *(undefined1 *)(unaff_EBP + -4) = 2;
          iStack_2c = 0x45a8f7;
          FUN_00414ebb();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + -0x24) != 0) {
            iStack_2c = 0;
            pcStack_30 = (char *)0x45a909;
            FUN_0045e794();
            *(undefined4 *)(unaff_EBP + -0x24) = 0;
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 0;
        iStack_2c = 0x45a917;
        FUN_00414ebb();
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        iStack_2c = 0x45a923;
        FUN_00414ebb();
        goto LAB_0045a923;
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      iStack_2c = *(int *)(unaff_EBP + -0x10) + -0xc;
      pcStack_30 = (char *)0x45a7e2;
      FUN_00434e38();
    }
  }
LAB_0045a923:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


