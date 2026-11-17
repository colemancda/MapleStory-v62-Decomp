/* FUN_00625a94 - 0x00625a94 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_00625a94(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined4 uVar5;
  int iStack_2c;
  uint uStack_28;
  int *piStack_24;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 8);
  iStack_2c = extraout_ECX + 0x18;
  *(uint **)(unaff_EBP + 8) = &uStack_28;
  piStack_24 = piVar1;
  FUN_00424dbc();
  iStack_2c = 0x625ac0;
  FUN_00624903();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  do {
    if ((*piVar1 == 0) || (uVar3 = *(uint *)(*piVar1 + -4), uVar3 <= *(uint *)(unaff_EBP + 8)))
    break;
    if (*(int *)(unaff_EBP + 8) == uVar3 - 1) {
      if (*(int *)(extraout_ECX + 0x14) == 1) break;
      piStack_24 = (int *)0x69c;
      uStack_28 = 0x625bd4;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x10) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 3;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        piStack_24 = (int *)0x625be9;
        iVar2 = FUN_007e62e9();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
      *(uint *)(unaff_EBP + -0x1c) = -(uint)(uVar3 != 0) & uVar3 - 8;
      piStack_24 = (int *)0x625c10;
      FUN_004c26c4();
      piStack_24 = (int *)0x1;
      uStack_28 = 0;
      iStack_2c = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 4;
      uVar4 = FUN_004726fc();
      *(int **)(unaff_EBP + -0x10) = &iStack_2c;
      iStack_2c = extraout_ECX_00;
      FUN_00450368(uVar4);
      uVar4 = *(undefined4 *)(extraout_ECX + 0x10);
      uVar5 = 1;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_004c2677(1,uVar4);
      FUN_007eddac(uVar5,uVar4);
      piStack_24 = (int *)0x625c50;
      FUN_007edf40();
      piStack_24 = (int *)0x625c58;
      FUN_007e6e3c();
      piStack_24 = (int *)0x625c60;
      iVar2 = FUN_004bc6a2();
      if (iVar2 != 6) {
        if (iVar2 == 7) {
          piStack_24 = (int *)0x625ca1;
          FUN_006258c8();
        }
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
LAB_00625c88:
        piStack_24 = (int *)0x625c8d;
        FUN_004c26e1();
        uVar4 = 0;
        goto LAB_00625ca6;
      }
      *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    else {
      piStack_24 = (int *)0x69c;
      uStack_28 = 0x625af4;
      iVar2 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x10) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        piStack_24 = (int *)0x625b05;
        iVar2 = FUN_007e62e9();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uVar3 = -(uint)(iVar2 != 0) & iVar2 + 8U;
      *(uint *)(unaff_EBP + -0x14) = -(uint)(uVar3 != 0) & uVar3 - 8;
      piStack_24 = (int *)0x625b2c;
      FUN_004c26c4();
      piStack_24 = (int *)0x0;
      uStack_28 = 0;
      iStack_2c = *(int *)(unaff_EBP + 8);
      *(undefined4 *)(unaff_EBP + -4) = 1;
      uVar4 = FUN_004726fc();
      *(int **)(unaff_EBP + -0x10) = &iStack_2c;
      FUN_00450368(uVar4);
      uVar4 = *(undefined4 *)(extraout_ECX + 0x10);
      uVar5 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_004c2677(0,uVar4);
      FUN_007eddac(uVar5,uVar4);
      if (*piVar1 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(*piVar1 + -4);
      }
      piStack_24 = (int *)(uint)(*(uint *)(unaff_EBP + 8) < iVar2 - 1U);
      uStack_28 = (uint)(0 < *(int *)(unaff_EBP + 8));
      iStack_2c = 0x625b89;
      FUN_007edf11();
      piStack_24 = (int *)0x625b91;
      FUN_007e6e3c();
      piStack_24 = (int *)0x625b99;
      iVar2 = FUN_004bc6a2();
      if (iVar2 == 0x2000) {
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + -1;
      }
      else {
        if (iVar2 != 0x2001) {
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          goto LAB_00625c88;
        }
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + 1;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    }
    piStack_24 = (int *)0x625c74;
    FUN_004c26e1();
  } while (-1 < *(int *)(unaff_EBP + 8));
  uVar4 = 1;
LAB_00625ca6:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


