/* FUN_0049473f - 0x0049473f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0049473f(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int extraout_ECX_03;
  int unaff_EBP;
  int aiStack_4c [5];
  
  FUN_00879bb8();
  *(int *)(unaff_EBP + -0x28) = extraout_ECX;
  aiStack_4c[4] = 0x494762;
  FUN_00486745();
  uVar2 = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(unaff_EBP + 0x10) = 0;
  do {
    aiStack_4c[4] = *(undefined4 *)(unaff_EBP + 0x10);
    aiStack_4c[3] = unaff_EBP + -0x24;
    aiStack_4c[2] = 0x494779;
    FUN_00495117();
    aiStack_4c[4] = *(undefined4 *)(unaff_EBP + 0x14);
    aiStack_4c[2] = unaff_EBP + -0x24;
    aiStack_4c[1] = 0x494787;
    aiStack_4c[3] = uVar2;
    iVar1 = (*DAT_0097b57c)();
    iVar3 = DAT_00978368;
    if (iVar1 != 0) {
      if (*(int *)(unaff_EBP + 0x10) != -1) {
        if ((*(int *)(unaff_EBP + 0x10) != 4) ||
           (*(int *)(*(int *)(extraout_ECX + 0x74) + 0x4f4) == 0)) goto LAB_004948ed;
        if (*(int *)(unaff_EBP + 8) == 0x201) {
          if (*(int *)(*(int *)(extraout_ECX + 0x74) + 0x500) == 9) {
            iVar1 = 0;
            *(undefined4 *)(unaff_EBP + -0x10) = 0;
            *(int *)(unaff_EBP + -0x14) = iVar3;
            *(undefined4 *)(unaff_EBP + 0x14) = 0x49c;
            goto LAB_004947f4;
          }
          aiStack_4c[4] = 9;
          aiStack_4c[3] = 0x4947db;
          FUN_00458692();
        }
      }
      break;
    }
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
  } while (*(int *)(unaff_EBP + 0x10) < 5);
  goto LAB_00494b02;
  while( true ) {
    aiStack_4c[3] = unaff_EBP + -0x1c;
    aiStack_4c[2] = 0x49480e;
    FUN_0084a5e4();
    if (*(int *)(unaff_EBP + -0x18) == 0) {
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      aiStack_4c[4] = 0x494842;
      FUN_0045e46f();
      aiStack_4c[0] = extraout_ECX_01;
      break;
    }
    iVar1 = iVar1 + *(int *)(*(int *)(unaff_EBP + -0x18) + 0x20);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    aiStack_4c[4] = 0x494824;
    FUN_0045e46f();
    *(int *)(unaff_EBP + 0x14) = *(int *)(unaff_EBP + 0x14) + 4;
    *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
    aiStack_4c[0] = extraout_ECX_00;
    if (0x4c3 < *(int *)(unaff_EBP + 0x14)) break;
LAB_004947f4:
    aiStack_4c[0] = *(int *)(unaff_EBP + 0x14);
    aiStack_4c[4] = *(int *)(aiStack_4c[0] + *(int *)(extraout_ECX + 0x74));
    if (aiStack_4c[4] == 0) break;
  }
  aiStack_4c[4] = 0;
  aiStack_4c[3] = 0;
  aiStack_4c[2] = 0;
  aiStack_4c[1] = 0;
  if (*(int *)(unaff_EBP + -0x10) < 10) {
    *(int **)(unaff_EBP + 8) = aiStack_4c;
    FUN_00679d22(aiStack_4c,0xd9f);
    FUN_007db3ad();
    goto LAB_00494b02;
  }
  aiStack_4c[0] = 0xda0;
  uVar2 = FUN_00679d22(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + 0x14) = uVar2;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  aiStack_4c[0] = 0x494894;
  uVar2 = FUN_00483ba7();
  *(undefined4 *)(unaff_EBP + -0x14) = uVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  aiStack_4c[0] = iVar1;
  uVar2 = FUN_00449713();
  uVar2 = FUN_00434e21(*(undefined4 *)(unaff_EBP + -0x14),uVar2);
  *(int **)(unaff_EBP + 0x14) = aiStack_4c;
  FUN_00450368(uVar2);
  iVar3 = FUN_007db791();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  aiStack_4c[4] = 0x4948d0;
  FUN_00414ebb();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  aiStack_4c[4] = 0x4948dc;
  FUN_00414ebb();
  if (iVar3 != 6) goto LAB_00494b02;
  aiStack_4c[4] = 0x4948ed;
  FUN_0045dafa();
LAB_004948ed:
  if ((*(int *)(unaff_EBP + 8) != 0x203) ||
     (aiStack_4c[4] = *(int *)(extraout_ECX + 0x60 + *(int *)(unaff_EBP + 0x10) * 4),
     aiStack_4c[4] < 0)) goto LAB_00494b02;
  aiStack_4c[3] = unaff_EBP + -0x30;
  aiStack_4c[2] = 0x494919;
  FUN_004903a3();
  *(undefined4 *)(unaff_EBP + -4) = 3;
  if (*(int *)(unaff_EBP + -0x2c) == 0) goto LAB_00494b02;
  aiStack_4c[4] = 0x494933;
  iVar3 = FUN_0045e2eb();
  if (iVar3 / 10000 == 0x1fb) {
LAB_0049497f:
    if (DAT_00978368 != 0) {
      aiStack_4c[4] = unaff_EBP + -0x38;
      aiStack_4c[3] = 0x494996;
      iVar3 = FUN_00455c59();
      *(uint *)(unaff_EBP + 8) = (uint)(*(int *)(iVar3 + 4) == 0);
      if (*(int *)(unaff_EBP + -0x34) != 0) {
        aiStack_4c[4] = 0;
        aiStack_4c[3] = 0x4949af;
        FUN_0045e7c2();
      }
      if (*(int *)(unaff_EBP + 8) == 0) {
        aiStack_4c[4] = unaff_EBP + -0x38;
        aiStack_4c[3] = 0x4949c7;
        iVar3 = FUN_00455c59();
        aiStack_4c[4] = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x35);
        aiStack_4c[3] = *(int *)(iVar3 + 4) + 0x33;
        *(undefined1 *)(unaff_EBP + -4) = 4;
        aiStack_4c[2] = 0x4949da;
        uVar4 = FUN_0045f03e();
        *(uint *)(unaff_EBP + 8) = uVar4 & 0xff;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int *)(unaff_EBP + -0x34) != 0) {
          aiStack_4c[4] = 0;
          aiStack_4c[3] = 0x4949f4;
          FUN_0045e7c2();
          *(undefined4 *)(unaff_EBP + -0x34) = 0;
        }
        aiStack_4c[4] = 0x494a02;
        iVar3 = FUN_0045e2eb();
        if ((iVar3 / 10000 == 0x1fb) && (*(int *)(unaff_EBP + 8) < 0xb)) {
          aiStack_4c[0] = 10000;
          *(int **)(unaff_EBP + 8) = aiStack_4c;
          uVar2 = 0xe58;
        }
        else {
          aiStack_4c[4] = 0x494a33;
          iVar3 = FUN_0045e2eb();
          if (((iVar3 / 10000 == 0x202) || (iVar3 / 10000 == 0x1f7)) &&
             (*(int *)(unaff_EBP + 8) < 0x10)) {
            aiStack_4c[0] = 10000;
            *(int **)(unaff_EBP + 8) = aiStack_4c;
            uVar2 = 0xe59;
          }
          else {
            aiStack_4c[4] = 0x494a65;
            iVar3 = FUN_0045e2eb();
            if ((iVar3 / 10000 == 0x202) || (iVar3 / 10000 == 0x1f7)) {
              aiStack_4c[4] = 0x494a80;
              iVar3 = FUN_00455bfd();
              if (iVar3 != 0) {
                *(int **)(unaff_EBP + 8) = aiStack_4c;
                uVar2 = 0xe5c;
                aiStack_4c[0] = extraout_ECX_02;
                goto LAB_00494abf;
              }
            }
            aiStack_4c[4] = 0x494aa0;
            iVar3 = FUN_0045e2eb();
            if ((iVar3 / 10000 != 0x1f8) || (6 < *(int *)(unaff_EBP + 8))) goto LAB_00494ad4;
            *(int **)(unaff_EBP + 8) = aiStack_4c;
            uVar2 = 0xe5b;
            aiStack_4c[0] = extraout_ECX_03;
          }
        }
LAB_00494abf:
        aiStack_4c[4] = 0;
        aiStack_4c[3] = 0;
        aiStack_4c[2] = 0;
        aiStack_4c[1] = 0;
        FUN_00679d22(aiStack_4c,uVar2);
        FUN_007db3ad();
      }
    }
  }
  else {
    aiStack_4c[4] = 0x494954;
    iVar3 = FUN_0045e2eb();
    if ((iVar3 / 10000 == 0x202) || (iVar3 / 10000 == 0x1f7)) goto LAB_0049497f;
    aiStack_4c[4] = 0x49496f;
    iVar3 = FUN_0045e2eb();
    if (iVar3 / 10000 == 0x1f8) goto LAB_0049497f;
LAB_00494ad4:
    iVar3 = *(int *)(unaff_EBP + -0x2c);
    aiStack_4c[4] = 0x494ae1;
    aiStack_4c[3] = FUN_0045e2eb();
    aiStack_4c[4] = *(undefined4 *)(iVar3 + 0xc);
    aiStack_4c[2] = 0x494af0;
    FUN_0045db5e();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x2c) != 0) {
    aiStack_4c[4] = 0;
    aiStack_4c[3] = 0x494b02;
    FUN_0045e794();
  }
LAB_00494b02:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


