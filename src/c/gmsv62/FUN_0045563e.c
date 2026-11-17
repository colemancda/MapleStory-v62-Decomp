/* FUN_0045563e - 0x0045563e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045563e(void)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int extraout_ECX_04;
  int extraout_ECX_05;
  uint uVar7;
  int extraout_ECX_06;
  int unaff_EBP;
  undefined4 uVar8;
  int aiStack_60 [5];
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0x40) == 0) {
    aiStack_60[4] = 0x99;
    aiStack_60[3] = 0x455661;
    FUN_00464f0d();
    goto LAB_00455bee;
  }
  if (*(int *)(extraout_ECX + 0x18) != 0) goto LAB_00455bee;
  if (*(int *)(extraout_ECX + 0x4dc) != 0) {
    aiStack_60[4] = 0;
    aiStack_60[3] = 0;
    aiStack_60[2] = 0;
    aiStack_60[1] = 0;
    *(int **)(unaff_EBP + -0x38) = aiStack_60;
    aiStack_60[0] = extraout_ECX;
    FUN_00679d22(aiStack_60,0xae8);
    iVar2 = FUN_007db3ad();
    if (iVar2 != 0) goto LAB_00455bee;
  }
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x44) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 5;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  aiStack_60[4] = 0x4556c8;
  FUN_00445a30();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  do {
    aiStack_60[4] = *(undefined4 *)(unaff_EBP + -0x14);
    aiStack_60[3] = 0x4556d9;
    iVar2 = FUN_004860bb();
    if (iVar2 != 0) {
      aiStack_60[4] = 0xffffffff;
      aiStack_60[3] = 0x4556ec;
      piVar3 = (int *)FUN_0045f1e3();
      *piVar3 = iVar2;
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
  } while (*(int *)(unaff_EBP + -0x14) < 0x32);
  aiStack_60[4] = 0x455702;
  iVar2 = FUN_004865f5();
  if (iVar2 != 0) {
    aiStack_60[4] = 0xffffffff;
    aiStack_60[3] = 0x455715;
    piVar3 = (int *)FUN_0045f1e3();
    *piVar3 = iVar2;
  }
  aiStack_60[4] = 0x455722;
  iVar2 = FUN_004866e0();
  if (iVar2 != 0) {
    aiStack_60[4] = 0xffffffff;
    aiStack_60[3] = 0x455735;
    piVar3 = (int *)FUN_0045f1e3();
    *piVar3 = iVar2;
  }
  aiStack_60[4] = 0x455742;
  iVar2 = FUN_004866ed();
  if (iVar2 != 0) {
    aiStack_60[4] = 0xffffffff;
    aiStack_60[3] = 0x455755;
    piVar3 = (int *)FUN_0045f1e3();
    *piVar3 = iVar2;
  }
  aiStack_60[4] = 0x455762;
  iVar2 = FUN_004866fa();
  if (iVar2 == 0) {
LAB_00455802:
    iVar2 = *(int *)(extraout_ECX + 0x938);
    if (iVar2 != 0) {
      aiStack_60[4] = 0xffffffff;
      aiStack_60[3] = 0x455819;
      piVar3 = (int *)FUN_0045f1e3();
      *piVar3 = iVar2;
    }
    if ((*(int *)(extraout_ECX + 0x4cc) != 0) &&
       (*(int *)(*(int *)(extraout_ECX + 0x4cc) + -4) != 0)) {
      *(int *)(unaff_EBP + -0x34) = DAT_00978368 + 0x3278;
      *(undefined4 *)(unaff_EBP + -0x38) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      while( true ) {
        aiStack_60[4] = *(int *)(extraout_ECX + 0x4cc);
        if ((aiStack_60[4] == 0) || (*(uint *)(aiStack_60[4] + -4) <= *(uint *)(unaff_EBP + -0x14)))
        goto LAB_00455992;
        aiStack_60[4] = aiStack_60[4] + *(uint *)(unaff_EBP + -0x14) * 4;
        aiStack_60[3] = 0x45586a;
        iVar2 = FUN_0045c1e1();
        if (-1 < iVar2) break;
LAB_004558af:
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
      }
      iVar2 = **(int **)(unaff_EBP + -0x34) + iVar2 * 8;
      if (*(int *)(*(int *)(iVar2 + 4) + 0x20) == 0) {
        *(undefined4 *)(unaff_EBP + -0x38) = 1;
      }
      aiStack_60[4] = 0x45588d;
      aiStack_60[3] = FUN_0045e2eb();
      aiStack_60[4] = 0;
      *(int *)(unaff_EBP + -0x3c) = aiStack_60[3];
      aiStack_60[2] = 0x455899;
      iVar4 = FUN_0045d395();
      if (iVar4 == 0) {
        aiStack_60[4] = unaff_EBP + -0x1c;
        aiStack_60[3] = *(undefined4 *)(unaff_EBP + -0x3c);
        aiStack_60[2] = 0x4558ab;
        iVar2 = FUN_0045870a();
        if (iVar2 != 0) goto LAB_004558af;
        aiStack_60[4] = 0x239;
        aiStack_60[3] = unaff_EBP + -0x3c;
        aiStack_60[2] = 0x455916;
        aiStack_60[4] = FUN_00679d22();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        aiStack_60[3] = 0x455923;
        iVar4 = FUN_0045ec92();
        iVar2 = extraout_ECX_04;
        if (iVar4 == 0) {
LAB_0045594d:
          *(undefined1 *)(unaff_EBP + -0xd) = 0;
        }
        else {
          aiStack_60[4] = 0;
          aiStack_60[3] = 0;
          aiStack_60[2] = 0;
          aiStack_60[1] = 0;
          *(int **)(unaff_EBP + -0x14) = aiStack_60;
          aiStack_60[0] = extraout_ECX_04;
          FUN_00679d22(aiStack_60,0x239);
          iVar4 = FUN_007db3ad();
          *(undefined1 *)(unaff_EBP + -0xd) = 1;
          iVar2 = extraout_ECX_05;
          if (iVar4 == 0) goto LAB_0045594d;
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (*(int *)(unaff_EBP + -0x3c) != 0) {
          aiStack_60[4] = *(int *)(unaff_EBP + -0x3c) + -0xc;
          aiStack_60[3] = 0x455964;
          FUN_00434e38();
          iVar2 = aiStack_60[4];
        }
        if (*(char *)(unaff_EBP + -0xd) != '\0') goto LAB_00455b43;
        aiStack_60[4] = 0;
        aiStack_60[3] = 0;
        aiStack_60[2] = 0;
        aiStack_60[1] = 0;
        *(int **)(unaff_EBP + -0x3c) = aiStack_60;
        aiStack_60[0] = iVar2;
        FUN_00450368(unaff_EBP + -0x1c);
      }
      else {
        iVar4 = extraout_ECX_02;
        if (*(int *)(*(int *)(iVar2 + 4) + 0x20) == 0) {
          aiStack_60[4] = 0;
          aiStack_60[3] = 0;
          aiStack_60[2] = 0;
          aiStack_60[1] = 0;
          *(int **)(unaff_EBP + -0x3c) = aiStack_60;
          aiStack_60[0] = extraout_ECX_02;
          FUN_00679d22(aiStack_60,0xb4f);
          iVar2 = FUN_007db3ad();
          iVar4 = extraout_ECX_03;
          if (iVar2 != 0) goto LAB_00455b43;
        }
        aiStack_60[4] = 0;
        aiStack_60[3] = 0;
        aiStack_60[2] = 0;
        aiStack_60[1] = 0;
        *(int **)(unaff_EBP + -0x3c) = aiStack_60;
        aiStack_60[0] = iVar4;
        FUN_00679d22(aiStack_60,0x200);
      }
      iVar2 = FUN_007db791();
      if (iVar2 != 6) goto LAB_00455b43;
LAB_00455992:
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined4 *)(unaff_EBP + -0x30) = 0;
      iVar2 = *(int *)(unaff_EBP + -0x2c);
      *(undefined1 *)(unaff_EBP + -4) = 9;
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      uVar7 = 0;
      while ((aiStack_60[4] = *(int *)(extraout_ECX + 0x4cc), aiStack_60[4] != 0 &&
             (uVar7 < *(uint *)(aiStack_60[4] + -4)))) {
        aiStack_60[4] = aiStack_60[4] + uVar7 * 4;
        aiStack_60[3] = 0x4559be;
        iVar4 = FUN_0045c1e1();
        if (-1 < iVar4) {
          *(undefined4 *)(unaff_EBP + -0x3c) =
               *(undefined4 *)(**(int **)(unaff_EBP + -0x34) + iVar4 * 8 + 4);
          aiStack_60[4] = 0x4559d8;
          FUN_0045e45d();
          iVar2 = iVar2 + *(int *)(*(int *)(unaff_EBP + -0x3c) + 0x20);
          aiStack_60[4] = unaff_EBP + -0x40;
          aiStack_60[3] = 0xffffffff;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          *(int *)(unaff_EBP + -0x2c) = iVar2;
          aiStack_60[2] = 0x4559f3;
          FUN_0045f28f();
          aiStack_60[3] = 0x4559fa;
          FUN_0045e10e();
          *(undefined1 *)(unaff_EBP + -4) = 9;
          aiStack_60[4] = 0x455a06;
          FUN_0045e46f();
        }
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
        uVar7 = *(uint *)(unaff_EBP + -0x14);
      }
      *(undefined4 *)(unaff_EBP + -0x24) = 0;
      if (*(int *)(unaff_EBP + -0x38) == 0) {
        aiStack_60[4] = *(undefined4 *)(extraout_ECX + 0x24);
        aiStack_60[3] = extraout_ECX + 0x1c;
        aiStack_60[2] = 0x455a22;
        iVar4 = FUN_00413367();
        if (iVar2 <= iVar4) {
          *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) | 1;
        }
      }
      aiStack_60[4] = *(undefined4 *)(extraout_ECX + 0x30);
      aiStack_60[3] = extraout_ECX + 0x28;
      aiStack_60[2] = 0x455a38;
      iVar4 = FUN_00413367();
      if (iVar2 <= iVar4) {
        *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) | 2;
      }
      aiStack_60[4] = *(int *)(extraout_ECX + 0x3c);
      aiStack_60[3] = extraout_ECX + 0x34;
      aiStack_60[2] = 0x455a4e;
      iVar5 = FUN_00413367();
      iVar4 = aiStack_60[4];
      if (iVar2 <= iVar5) {
        *(uint *)(unaff_EBP + -0x24) = *(uint *)(unaff_EBP + -0x24) | 4;
      }
      if (*(int *)(unaff_EBP + -0x24) == 0) {
        aiStack_60[4] = 0;
        aiStack_60[3] = 0;
        aiStack_60[2] = 0;
        aiStack_60[1] = 0;
        aiStack_60[0] = iVar4;
        *(int **)(unaff_EBP + -0x3c) = aiStack_60;
        FUN_00679d22(aiStack_60,0x224);
        FUN_007db3ad();
      }
      else {
        aiStack_60[4] = 0x208;
        aiStack_60[3] = unaff_EBP + -0x3c;
        aiStack_60[2] = 0x455a99;
        puVar6 = (undefined4 *)FUN_00679d22();
        aiStack_60[3] = *puVar6;
        aiStack_60[4] = *(undefined4 *)(unaff_EBP + -0x2c);
        *(undefined1 *)(unaff_EBP + -4) = 0xb;
        aiStack_60[2] = unaff_EBP + -0x18;
        aiStack_60[1] = 0x455aac;
        FUN_00434e21();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        if (*(int *)(unaff_EBP + -0x3c) != 0) {
          aiStack_60[4] = *(int *)(unaff_EBP + -0x3c) + -0xc;
          aiStack_60[3] = 0x455ac3;
          FUN_00434e38();
        }
        aiStack_60[4] = 0x209;
        aiStack_60[3] = unaff_EBP + -0x3c;
        aiStack_60[2] = 0x455ad4;
        piVar3 = (int *)FUN_00679d22();
        aiStack_60[3] = *piVar3;
        *(undefined1 *)(unaff_EBP + -4) = 0xc;
        if (aiStack_60[3] == 0) {
          aiStack_60[4] = 0;
        }
        else {
          aiStack_60[4] = *(undefined4 *)(aiStack_60[3] + -4);
        }
        aiStack_60[2] = 0x455aef;
        FUN_0045efbb();
        *(undefined1 *)(unaff_EBP + -4) = 9;
        iVar2 = extraout_ECX_06;
        if (*(int *)(unaff_EBP + -0x3c) != 0) {
          aiStack_60[4] = *(int *)(unaff_EBP + -0x3c) + -0xc;
          aiStack_60[3] = 0x455b03;
          FUN_00434e38();
          iVar2 = aiStack_60[4];
        }
        aiStack_60[4] = 0;
        aiStack_60[3] = unaff_EBP + -0x28;
        aiStack_60[2] = unaff_EBP + -0x24;
        aiStack_60[1] = 1;
        *(int **)(unaff_EBP + -0x38) = aiStack_60;
        aiStack_60[0] = iVar2;
        FUN_00450368(unaff_EBP + -0x18);
        iVar2 = FUN_00455c7c();
        if (iVar2 == 1) {
          *(undefined4 *)(extraout_ECX + 0x4d8) = *(undefined4 *)(unaff_EBP + -0x24);
          if (*(int *)(extraout_ECX + 0x4cc) == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = *(undefined4 *)(*(int *)(extraout_ECX + 0x4cc) + -4);
          }
          *(undefined4 *)(extraout_ECX + 0x4d4) = uVar8;
          aiStack_60[4] = 0x455baa;
          FUN_00457a26();
          *(undefined1 *)(unaff_EBP + -4) = 8;
          aiStack_60[4] = 0x455bb6;
          FUN_00445a30();
          *(undefined1 *)(unaff_EBP + -4) = 5;
          aiStack_60[4] = 0x455bc2;
          FUN_0045f253();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          if (*(int *)(unaff_EBP + -0x18) != 0) {
            aiStack_60[4] = *(int *)(unaff_EBP + -0x18) + -0xc;
            aiStack_60[3] = 0x455bd6;
            FUN_00434e38();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0;
          aiStack_60[4] = 0x455be2;
          FUN_00414ebb();
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          aiStack_60[4] = 0x455bee;
          FUN_00414ebb();
          goto LAB_00455bee;
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      aiStack_60[4] = 0x455b37;
      FUN_00445a30();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      aiStack_60[4] = 0x455b43;
      FUN_0045f253();
    }
  }
  else {
    aiStack_60[4] = unaff_EBP + -0x40;
    aiStack_60[3] = 0x45577b;
    iVar4 = FUN_00455c59();
    aiStack_60[4] = *(undefined4 *)(*(int *)(iVar4 + 4) + 0x35);
    aiStack_60[3] = *(int *)(iVar4 + 4) + 0x33;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    aiStack_60[2] = 0x45578e;
    bVar1 = FUN_0045f03e();
    *(char *)(unaff_EBP + -0xd) = '\x01' - (0xf < bVar1);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    aiStack_60[4] = 0x4557a7;
    FUN_0045e4a2();
    if (*(char *)(unaff_EBP + -0xd) == '\0') {
      aiStack_60[4] = 0x4557de;
      iVar4 = FUN_00455bfd();
      if (iVar4 == 0) {
        aiStack_60[4] = 0xffffffff;
        aiStack_60[3] = 0x455800;
        piVar3 = (int *)FUN_0045f1e3();
        *piVar3 = iVar2;
        goto LAB_00455802;
      }
      *(int **)(unaff_EBP + -0x3c) = aiStack_60;
      uVar8 = 0xe5c;
      aiStack_60[0] = extraout_ECX_01;
    }
    else {
      *(int **)(unaff_EBP + -0x3c) = aiStack_60;
      uVar8 = 0xe59;
      aiStack_60[0] = extraout_ECX_00;
    }
    aiStack_60[4] = 0;
    aiStack_60[3] = 0;
    aiStack_60[2] = 0;
    aiStack_60[1] = 0;
    FUN_00679d22(aiStack_60,uVar8);
    FUN_007db3ad();
  }
LAB_00455b43:
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    aiStack_60[4] = *(int *)(unaff_EBP + -0x18) + -0xc;
    aiStack_60[3] = 0x455b57;
    FUN_00434e38();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x20) != 0) {
    aiStack_60[4] = *(int *)(unaff_EBP + -0x20) + -0xc;
    aiStack_60[3] = 0x455b6b;
    FUN_00434e38();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    aiStack_60[4] = *(int *)(unaff_EBP + -0x1c) + -0xc;
    aiStack_60[3] = 0x455b80;
    FUN_00434e38();
  }
LAB_00455bee:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


