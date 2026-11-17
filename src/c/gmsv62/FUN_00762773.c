/* FUN_00762773 - 0x00762773 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00762773(void)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int unaff_EBP;
  int *piVar7;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iVar4 = *(int *)(extraout_ECX + 0x57c);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  if (iVar4 == 0) {
    uVar3 = FUN_00679d86(unaff_EBP + -0x20,0x9dc);
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar4 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x20) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00450382(uVar3);
    (**(code **)(**(int **)(iVar4 + 4) + 0x20))(extraout_ECX,2000,0xd0,0x16,1,unaff_EBP + -0x30);
  }
  if (*(int *)(extraout_ECX + 0x584) == 0) {
    uVar3 = FUN_00679d86(unaff_EBP + -0x20,0x9dd);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar4 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x20) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00450382(uVar3);
    (**(code **)(**(int **)(iVar4 + 4) + 0x20))(extraout_ECX,0x7d1,0xd0,0x29,1,unaff_EBP + -0x30);
  }
  if (*(int *)(extraout_ECX + 0x58c) == 0) {
    uVar3 = FUN_00679d86(unaff_EBP + -0x20,0x9de);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar4 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x20) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00450382(uVar3);
    (**(code **)(**(int **)(iVar4 + 4) + 0x20))(extraout_ECX,0x7d2,0x75,0x16,1,unaff_EBP + -0x30);
  }
  if (*(int *)(extraout_ECX + 0x594) == 0) {
    uVar3 = FUN_00679d86(unaff_EBP + -0x20,0x9df);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar4 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x20) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00450382(uVar3);
    (**(code **)(**(int **)(iVar4 + 4) + 0x20))(extraout_ECX,0x7d3,0x75,0x2a,1,unaff_EBP + -0x30);
  }
  if (*(int *)(extraout_ECX + 0x59c) == 0) {
    uVar3 = FUN_00679d86(unaff_EBP + -0x20,0x9f5);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar4 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x20) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00450382(uVar3);
    (**(code **)(**(int **)(iVar4 + 4) + 0x20))(extraout_ECX,0x7d4,0xed,0x72,1,unaff_EBP + -0x30);
  }
  if (*(int *)(extraout_ECX + 0x5a4) == 0) {
    uVar3 = FUN_00679d86(unaff_EBP + -0x20,0x9f6);
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    FUN_00419192(uVar3);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar4 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x20) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar4 = FUN_00450382(uVar3);
    (**(code **)(**(int **)(iVar4 + 4) + 0x20))(extraout_ECX,0x7d5,0xfc,0x72,1,unaff_EBP + -0x30);
  }
  if (*(int **)(extraout_ECX + 0x5ac) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x5ac) + 0xc))();
    FUN_00450463();
  }
  if (*(int **)(extraout_ECX + 0x5b4) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x5b4) + 0xc))();
    FUN_00450463();
  }
  if (*(int **)(extraout_ECX + 0x5bc) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x5bc) + 0xc))();
    FUN_00450463();
  }
  iVar4 = *(int *)(extraout_ECX + 0x618);
  *(undefined4 *)(unaff_EBP + -0x14) = 0x154;
  if (iVar4 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0xb1;
  }
  if (iVar4 == 1) {
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x26;
  }
  *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x5c4;
  *(undefined4 *)(unaff_EBP + -0x20) = 3;
  do {
    if ((int *)**(int **)(unaff_EBP + -0x18) != (int *)0x0) {
      (**(code **)(*(int *)**(int **)(unaff_EBP + -0x18) + 0xc))();
      FUN_00450463();
    }
    *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 8;
    piVar7 = (int *)(unaff_EBP + -0x20);
    *piVar7 = *piVar7 + -1;
  } while (*piVar7 != 0);
  if (*(int *)(extraout_ECX + 0x618) == 1) {
    uVar3 = FUN_00679d86(unaff_EBP + -0x18,0x9d6);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
  }
  else {
    uVar3 = FUN_00679d86(unaff_EBP + -0x20,0x9d7);
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 0xe;
  }
  FUN_00419192(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0xd;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00402676();
  }
  iVar4 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00450382(uVar3);
  (**(code **)(**(int **)(iVar4 + 4) + 0x20))
            (extraout_ECX,0x7d7 - (uint)(*(int *)(extraout_ECX + 0x618) != 1),0x5c,
             *(undefined4 *)(unaff_EBP + -0x14),1,unaff_EBP + -0x30);
  if (*(int *)(extraout_ECX + 0x618) == 2) {
    uVar3 = FUN_00679d86(unaff_EBP + -0x18,0x9d8);
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
  }
  else {
    uVar3 = FUN_00679d86(unaff_EBP + -0x20,0x9d9);
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
    *(undefined4 *)(unaff_EBP + -4) = 0x11;
  }
  FUN_00419192(uVar3);
  *(undefined4 *)(unaff_EBP + -4) = 0x10;
  if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
    FUN_00402676();
  }
  iVar4 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x12;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00450382(uVar3);
  (**(code **)(**(int **)(iVar4 + 4) + 0x20))
            (extraout_ECX,(*(int *)(extraout_ECX + 0x618) == 2) + 0x7d8,5,
             *(undefined4 *)(unaff_EBP + -0x14),1,unaff_EBP + -0x30);
  uVar3 = FUN_00679d86(unaff_EBP + -0x20,0x9e2);
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_00419192(uVar3);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar4 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar4;
  *(undefined1 *)(unaff_EBP + -4) = 0x14;
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  iVar4 = FUN_00450382(uVar3);
  (**(code **)(**(int **)(iVar4 + 4) + 0x20))
            (extraout_ECX,0x7da,199,*(undefined4 *)(unaff_EBP + -0x14),1,unaff_EBP + -0x30);
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5b4) + 4) + 0x1c))
            (*(undefined4 *)(extraout_ECX + 0x680));
  iVar4 = *(int *)(*(int *)(DAT_00978358 + 0x1744) + 4);
  if (*(int *)(extraout_ECX + 0x61c) == *(int *)(DAT_00978358 + 0xd78)) {
    if ((iVar4 == 0) || (*(int *)(extraout_ECX + 0x634) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = *(undefined4 *)(extraout_ECX + 0x634);
  }
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5ac) + 4) + 0x1c))(uVar3);
  if (((*(int *)(extraout_ECX + 0x61c) == *(int *)(DAT_00978358 + 0xd78)) && (iVar4 != 0)) &&
     (*(int *)(extraout_ECX + 0x634) != 0)) {
    iVar5 = FUN_004cd670(iVar4 + 0x16c,*(undefined4 *)(iVar4 + 0x174));
    if (iVar5 == 0) goto LAB_00762df4;
    uVar3 = 1;
  }
  else {
LAB_00762df4:
    uVar3 = 0;
  }
  (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5bc) + 4) + 0x1c))(uVar3);
  if (*(int *)(extraout_ECX + 0x618) != 1) {
    iVar4 = *(int *)(*(int *)(extraout_ECX + 0x5bc) + 4);
    uVar3 = 0;
    goto LAB_00762e53;
  }
  if ((iVar4 == 0) || (*(int *)(extraout_ECX + 0x634) == 0)) {
LAB_00762e37:
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_004cd670(iVar4 + 0x16c,*(undefined4 *)(iVar4 + 0x174));
    if (iVar4 == 0) goto LAB_00762e37;
    uVar3 = 1;
  }
  iVar4 = *(int *)(*(int *)(extraout_ECX + 0x5bc) + 4);
LAB_00762e53:
  (**(code **)(iVar4 + 0x1c))(uVar3);
  if (*(int *)(extraout_ECX + 0x618) == 1) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0xa8;
    *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x5c4;
    iVar4 = 0x7db;
    do {
      puVar6 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x20,0x112b);
      uVar3 = *puVar6;
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      FUN_0041354c(unaff_EBP + -0x24,uVar3,iVar4 + -0x7da);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      iVar5 = FUN_004029b9(0x578);
      *(int *)(unaff_EBP + -0x10) = iVar5;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      if (iVar5 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar5 = FUN_00450382(uVar3);
      (**(code **)(**(int **)(iVar5 + 4) + 0x20))
                (extraout_ECX,iVar4,*(undefined4 *)(unaff_EBP + -0x14),0xb1,1,unaff_EBP + -0x30);
      (**(code **)(*(int *)(**(int **)(unaff_EBP + -0x18) + 4) + 0x1c))(0);
      *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 0x22;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 8;
      iVar5 = iVar4 + -0x7da;
      iVar4 = iVar4 + 1;
    } while (iVar5 < 3);
    *(int *)(unaff_EBP + -0x18) = extraout_ECX + 0x5c4;
    piVar7 = (int *)(extraout_ECX + 0x6a0);
    *(undefined4 *)(unaff_EBP + -0x20) = 3;
    do {
      if (*piVar7 != 0) {
        (**(code **)(*(int *)(**(int **)(unaff_EBP + -0x18) + 4) + 0x1c))(1);
      }
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + 8;
      piVar7 = piVar7 + 1;
      piVar1 = (int *)(unaff_EBP + -0x20);
      *piVar1 = *piVar1 + -1;
    } while (*piVar1 != 0);
  }
  iVar4 = FUN_00455c59(unaff_EBP + -0x1c);
  iVar4 = *(int *)(iVar4 + 4);
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    FUN_0045e7c2(0);
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
  }
  bVar2 = FUN_0045f03e(iVar4 + 0x33,*(undefined4 *)(iVar4 + 0x35));
  if (bVar2 < 0xf) {
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x59c) + 4) + 0x1c))(0);
    (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x5a4) + 4) + 0x1c))(0);
  }
  if (*(int **)(extraout_ECX + 0x5dc) != (int *)0x0) {
    (**(code **)(**(int **)(extraout_ECX + 0x5dc) + 0xc))();
    FUN_0045e60b();
  }
  if ((*(int *)(extraout_ECX + 0x618) == 1) || (*(int *)(extraout_ECX + 0x618) == 2)) {
    iVar4 = FUN_004029b9(0x74);
    *(int *)(unaff_EBP + -0x20) = iVar4;
    *(undefined1 *)(unaff_EBP + -4) = 0x17;
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004abf25();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0048b9e9(uVar3);
    (**(code **)(**(int **)(extraout_ECX + 0x5dc) + 0x20))
              (extraout_ECX,0x7de,1,3,0xfc,
               (-(uint)(*(int *)(extraout_ECX + 0x618) != 1) & 0xffffffda) + 0xd7,0x70,0);
    *(undefined4 *)(*(int *)(extraout_ECX + 0x5dc) + 0x34) = 0xd7;
    if (*(int *)(extraout_ECX + 0x618) == 1) {
      iVar4 = *(int *)(extraout_ECX + 0x5f8 + *(int *)(extraout_ECX + 0x63c) * 4);
    }
    else {
      iVar4 = *(int *)(extraout_ECX + 0x604);
    }
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + -4);
    }
    FUN_004ad003(iVar4 + -2);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


