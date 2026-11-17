/* FUN_00765c73 - 0x00765c73 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00765c73(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  undefined1 *local_58;
  int aiStack_54 [5];
  int *piStack_40;
  
  FUN_00879bb8();
  piStack_40 = (int *)0x765c90;
  FUN_00766e22();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  do {
    if ((*(int *)(unaff_EBP + -0x10) != 0) && (*(int *)(unaff_EBP + -0x10) != 0xe)) {
      if (*(int *)(unaff_EBP + -0x10) == 0x12) {
        *(undefined4 *)(extraout_ECX + 0x684) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x61);
      }
      else if (*(int *)(unaff_EBP + -0x10) == 0x13) {
        *(undefined4 *)(extraout_ECX + 0x688) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x65);
      }
      else if (*(int *)(unaff_EBP + -0x10) == 0x14) {
        *(undefined4 *)(extraout_ECX + 0x68c) = *(undefined4 *)(*(int *)(unaff_EBP + 8) + 0x69);
      }
      else {
        if ((*(int *)(unaff_EBP + -0x10) == 0xb) &&
           (piStack_40 = *(int **)(*(int *)(unaff_EBP + 8) + 0x15), (int)piStack_40 / 100000 == 0x11
           )) {
          aiStack_54[4] = 0x765d14;
          FUN_0048b92c();
          *(undefined4 *)(unaff_EBP + -4) = 0;
          piStack_40 = (int *)0x765d20;
          uVar2 = FUN_0045e2eb();
          piStack_40 = (int *)0xffffffff;
          aiStack_54[4] = 0x765d2e;
          FUN_00766e61();
          aiStack_54[4] = 0x765d36;
          piStack_40 = (int *)uVar2;
          FUN_0045e3a0();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x1c) != 0) {
            piStack_40 = *(int **)(unaff_EBP + -0x1c);
            aiStack_54[4] = 0x765d4c;
            FUN_00402b41();
          }
        }
        iVar1 = *(int *)(unaff_EBP + 8) + *(int *)(unaff_EBP + -0x10) * 4;
        *(int *)(unaff_EBP + -0x14) = iVar1;
        piStack_40 = *(int **)(iVar1 + 0xdd);
        if ((piStack_40 != (int *)0x0) && (0 < (int)piStack_40)) {
          aiStack_54[4] = 0x765d6d;
          FUN_0048b92c();
          *(undefined4 *)(unaff_EBP + -4) = 1;
          piStack_40 = (int *)0x765d7c;
          uVar2 = FUN_0045e2eb();
          piStack_40 = (int *)0xffffffff;
          aiStack_54[4] = 0x765d8a;
          FUN_00766e61();
          aiStack_54[4] = 0x765d92;
          piStack_40 = (int *)uVar2;
          FUN_0045e3a0();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x28) != 0) {
            piStack_40 = *(int **)(unaff_EBP + -0x28);
            aiStack_54[4] = 0x765da8;
            FUN_00402b41();
          }
        }
        piStack_40 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x19);
        if (((piStack_40 != (int *)0x0) && (0 < (int)piStack_40)) &&
           ((int)piStack_40 / 10000 != 0xb5)) {
          aiStack_54[4] = 0x765dce;
          FUN_0048b92c();
          *(undefined4 *)(unaff_EBP + -4) = 2;
          piStack_40 = (int *)0x765ddd;
          uVar2 = FUN_0045e2eb();
          piStack_40 = (int *)0xffffffff;
          aiStack_54[4] = 0x765deb;
          FUN_00766e61();
          aiStack_54[4] = 0x765df3;
          piStack_40 = (int *)uVar2;
          FUN_0045e3a0();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int *)(unaff_EBP + -0x34) != 0) {
            piStack_40 = *(int **)(unaff_EBP + -0x34);
            aiStack_54[4] = 0x765e09;
            FUN_00402b41();
          }
        }
      }
    }
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
  } while (*(int *)(unaff_EBP + -0x10) < 0x31);
  piStack_40 = (int *)0x765e23;
  FUN_004497c2();
  piStack_40 = (int *)0x0;
  aiStack_54[4] = 100;
  aiStack_54[3] = 0x82;
  aiStack_54[2] = 0x37;
  aiStack_54[1] = 1;
  local_58 = (undefined1 *)aiStack_54;
  *(int **)(unaff_EBP + -0x18) = aiStack_54;
  aiStack_54[0] = extraout_ECX_00;
  FUN_004489f5();
  local_58 = (undefined1 *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 3;
  uVar2 = FUN_004489f5();
  *(undefined1 ***)(unaff_EBP + -0x10) = &local_58;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_0048bccf(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uVar3 = FUN_0044972c(2,1);
  uVar2 = *(undefined4 *)(unaff_EBP + 8);
  FUN_00449780(uVar2,uVar3);
  FUN_0043f082(uVar2,uVar3);
  piStack_40 = *(int **)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piStack_40 != (int *)0x0) {
    aiStack_54[4] = 0x765e91;
    (**(code **)(*piStack_40 + 8))();
  }
  if ((*(int *)(extraout_ECX + 0x684) != 0) && (*(int *)(extraout_ECX + 0x688) != 0)) {
    piStack_40 = (int *)0x765eb8;
    FUN_004497c2();
    aiStack_54[0] = *(int *)(extraout_ECX + 0x684);
    aiStack_54[4] = ((aiStack_54[0] != 0x1d05b2) - 1 & 0xffffffe2) + 100;
    if (aiStack_54[0] == 0x1d05b2) {
      aiStack_54[2] = -5;
    }
    else {
      aiStack_54[2] = 0;
    }
    piStack_40 = (int *)0x0;
    aiStack_54[3] = 0x105;
    aiStack_54[2] = aiStack_54[2] + 0x35;
    aiStack_54[1] = 1;
    local_58 = (undefined1 *)aiStack_54;
    *(int **)(unaff_EBP + -0x18) = aiStack_54;
    FUN_004489f5();
    local_58 = (undefined1 *)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 7;
    uVar2 = FUN_004489f5();
    *(undefined1 ***)(unaff_EBP + -0x14) = &local_58;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    FUN_0048bccf(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    uVar3 = FUN_0044972c(2,1);
    uVar2 = *(undefined4 *)(unaff_EBP + 8);
    FUN_00449780(uVar2,uVar3);
    FUN_0043f082(uVar2,uVar3);
    piStack_40 = *(int **)(unaff_EBP + -0x10);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (piStack_40 != (int *)0x0) {
      aiStack_54[4] = 0x765f4b;
      (**(code **)(*piStack_40 + 8))();
    }
    piStack_40 = *(int **)(extraout_ECX + 0x684);
    aiStack_54[4] = 0x765f62;
    FUN_00445548();
    piStack_40 = (int *)0x0;
    aiStack_54[4] = 0x765f6b;
    FUN_00445576();
    piStack_40 = *(int **)(extraout_ECX + 0x618);
    aiStack_54[4] = 0x765f78;
    FUN_007621bc();
  }
  if (*(int *)(extraout_ECX + 0x5e4) != 0) {
    piStack_40 = (int *)0x765f89;
    FUN_0076060a();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


