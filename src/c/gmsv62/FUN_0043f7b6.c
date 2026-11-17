/* FUN_0043f7b6 - 0x0043f7b6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0043f7b6(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  uint uVar7;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined1 *puStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x468) == 0) {
    uStack_18 = 0;
    iStack_1c = 0x43f7dd;
    iVar3 = FUN_0043f90a();
    iVar6 = *(int *)(extraout_ECX + 0x468);
    iVar1 = *(int *)(unaff_EBP + 8);
    if (((((iVar6 == 0) || ((iVar3 != 8 && (iVar3 != 0x10)))) &&
         ((iVar6 != 0 || ((iVar3 != 0x21 && (iVar3 != 0x20)))))) || (iVar1 != 8)) &&
       ((-1 < iVar1 && (iVar1 < 0x17)))) {
      uStack_18 = 0x43f825;
      uVar4 = FUN_004133b5();
      *(undefined4 *)(extraout_ECX + 0x460) = uVar4;
      *(undefined4 *)(extraout_ECX + 0x464) = 0;
      if (*(int *)(extraout_ECX + 0x4ac) == 0) {
        uStack_18 = *(undefined4 *)(unaff_EBP + 0xc);
        iStack_1c = 0x43f847;
        FUN_00441170();
        *(undefined4 *)(unaff_EBP + 8) = 0;
        puVar2 = *(undefined4 **)(&DAT_00978410 + iVar1 * 4);
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if (puVar2 == (undefined4 *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *puVar2;
        }
        uStack_18 = 0x3d6;
        iStack_1c = unaff_EBP + 0xc;
        puStack_20 = (undefined1 *)0x43f873;
        piVar5 = (int *)FUN_00679d86();
        iStack_1c = *piVar5;
        puStack_20 = (undefined1 *)(unaff_EBP + 8);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        uStack_24 = 0x43f884;
        uStack_18 = uVar4;
        FUN_0041354c();
        *(undefined1 *)(unaff_EBP + -4) = 0;
        uStack_18 = 0x43f892;
        FUN_00402676();
        if (DAT_0097810c != 0) {
          uStack_18 = 3;
          puStack_20 = (undefined1 *)&iStack_1c;
          *(int **)(unaff_EBP + -0x10) = &iStack_1c;
          uStack_24 = 0x43f8aa;
          iStack_1c = extraout_ECX_00;
          FUN_0043f93c();
          puStack_20 = (undefined1 *)0x0;
          uStack_24 = 0;
          *(undefined1 **)(unaff_EBP + -0x14) = auStack_28;
          *(undefined1 *)(unaff_EBP + -4) = 2;
          FUN_0043f961(auStack_28);
          *(undefined1 *)(unaff_EBP + -4) = 0;
          iVar6 = FUN_0043f900();
          uVar7 = (uint)(iVar6 == 0);
          uVar4 = FUN_00411641(uVar7);
          FUN_00424e82(uVar4);
          FUN_0042b613(uVar4,uVar7);
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        uStack_18 = 0x43f8ef;
        FUN_00402676();
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


