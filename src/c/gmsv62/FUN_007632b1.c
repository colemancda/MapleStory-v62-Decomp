/* FUN_007632b1 - 0x007632b1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007632b1(void)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 *puVar3;
  undefined4 uStack_10;
  int iStack_c;
  
  FUN_00879bb8();
  uVar1 = *(uint *)(unaff_EBP + 8) & 3;
  if (uVar1 != 0) {
    if (uVar1 == 1) {
      iStack_c = extraout_ECX + 0x6b8;
      if ((*(int *)(extraout_ECX + 0x6b8) != 0) && (*(int *)(extraout_ECX + 0x5ec) != 0)) {
        puVar3 = &uStack_10;
        *(undefined4 **)(unaff_EBP + 8) = &uStack_10;
        FUN_00766afb(&uStack_10);
        FUN_004489f5(puVar3);
        FUN_007634c4();
      }
      if (*(int *)(extraout_ECX + 0x5e4) == 0) {
        iStack_c = 0x74;
        uStack_10 = 0x7633ea;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (iVar2 == 0) {
          iStack_c = 0;
        }
        else {
          iStack_c = 0x7633ff;
          iStack_c = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
          uStack_10 = 0x763407;
          uStack_10 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
          iStack_c = FUN_00761d2d();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uStack_10 = 0x763424;
        FUN_00766ab1();
      }
      iStack_c = extraout_ECX + 0x6b4;
      puVar3 = &uStack_10;
      *(undefined4 **)(unaff_EBP + 8) = &uStack_10;
      *(undefined4 *)(extraout_ECX + 0x570) = 1;
      FUN_00766aad(&uStack_10);
    }
    else {
      if (uVar1 != 2) goto LAB_007634b4;
      iStack_c = extraout_ECX + 0x6b4;
      if ((*(int *)(extraout_ECX + 0x6b4) != 0) && (*(int *)(extraout_ECX + 0x5e4) != 0)) {
        puVar3 = &uStack_10;
        *(undefined4 **)(unaff_EBP + 8) = &uStack_10;
        FUN_00766aad(&uStack_10);
        FUN_004489f5(puVar3);
        FUN_007634c4();
      }
      if (*(int *)(extraout_ECX + 0x5ec) == 0) {
        iStack_c = 0x574;
        uStack_10 = 0x76332b;
        iVar2 = FUN_004029b9();
        *(int *)(unaff_EBP + 8) = iVar2;
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (iVar2 == 0) {
          iStack_c = 0;
        }
        else {
          iStack_c = 0x763344;
          iStack_c = (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
          uStack_10 = 0x76334c;
          uStack_10 = (**(code **)(*(int *)(extraout_ECX + 4) + 0x2c))();
          iStack_c = FUN_00761e34();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uStack_10 = 0x763369;
        FUN_00766aff();
      }
      iStack_c = extraout_ECX + 0x6b8;
      puVar3 = &uStack_10;
      *(undefined4 **)(unaff_EBP + 8) = &uStack_10;
      *(undefined4 *)(extraout_ECX + 0x570) = 2;
      FUN_00766afb(&uStack_10);
    }
    FUN_004489f5(puVar3);
    FUN_007634c4();
    goto LAB_007634b4;
  }
  iStack_c = extraout_ECX + 0x6b8;
  if ((*(int *)(extraout_ECX + 0x6b8) == 0) || (*(int *)(extraout_ECX + 0x5ec) == 0)) {
    iStack_c = extraout_ECX + 0x6b4;
    if ((*(int *)(extraout_ECX + 0x6b4) != 0) && (*(int *)(extraout_ECX + 0x5e4) != 0)) {
      puVar3 = &uStack_10;
      *(undefined4 **)(unaff_EBP + 8) = &uStack_10;
      FUN_00766aad(&uStack_10);
      goto LAB_007634a0;
    }
  }
  else {
    puVar3 = &uStack_10;
    *(undefined4 **)(unaff_EBP + 8) = &uStack_10;
    FUN_00766afb(&uStack_10);
LAB_007634a0:
    FUN_004489f5(puVar3);
    FUN_007634c4();
  }
  *(undefined4 *)(extraout_ECX + 0x570) = 0;
LAB_007634b4:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


