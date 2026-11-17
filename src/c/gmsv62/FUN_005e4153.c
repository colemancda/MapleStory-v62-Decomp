/* FUN_005e4153 - 0x005e4153 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005e4153(int param_1,char *param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = FUN_0045f084(param_1,*(undefined4 *)(param_1 + 4));
  FUN_0045d247(uVar6);
  uVar6 = FUN_0045f084(param_1 + 8,*(undefined4 *)(param_1 + 0xc));
  FUN_0045d247(uVar6);
  sVar5 = FUN_0045f084(param_1,*(undefined4 *)(param_1 + 4));
  *(int *)(param_1 + 0x38) = (int)sVar5;
  *(int *)(param_1 + 0x30) = (int)sVar5;
  sVar5 = FUN_0045f084(param_1 + 8,*(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x3c) = (int)sVar5;
  *(int *)(param_1 + 0x34) = (int)sVar5;
  FUN_00457cda(*(undefined4 *)(param_1 + 0x18));
  pcVar4 = *(char **)(param_1 + 0x1c);
joined_r0x005e41bd:
  do {
    if (pcVar4 == (char *)0x0) {
      if (*(int *)(param_1 + 0x24) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x24) + -4);
      }
      FUN_00457cda(uVar6);
      for (uVar8 = 0;
          (iVar3 = *(int *)(param_1 + 0x24), iVar3 != 0 && (uVar8 < *(uint *)(iVar3 + -4)));
          uVar8 = uVar8 + 2) {
        bVar1 = *(byte *)(iVar3 + uVar8);
        param_2 = (char *)(CONCAT31(param_2._1_3_,bVar1) & 0xffffff0f);
        iVar7 = 0;
        if (*(int *)(param_1 + 0x24) != 0) {
          iVar7 = *(int *)(*(int *)(param_1 + 0x24) + -4);
        }
        if (uVar8 != iVar7 - 1U) {
          param_2 = (char *)CONCAT31(param_2._1_3_,bVar1 & 0xf | ((byte *)(iVar3 + uVar8))[1] << 4);
        }
        FUN_00457cda(param_2);
      }
      FUN_0045d247(*(undefined2 *)(param_1 + 0x30));
      FUN_0045d247(*(undefined2 *)(param_1 + 0x34));
      FUN_0045d247(*(undefined2 *)(param_1 + 0x38));
      FUN_0045d247(*(undefined2 *)(param_1 + 0x3c));
      return;
    }
    iVar3 = *(int *)((-(uint)(pcVar4 != (char *)0x0) & (uint)(pcVar4 + -0x10)) + 4);
    param_2 = (char *)(-(uint)(iVar3 != 0) & iVar3 + 0x10U);
    FUN_00457cda(*pcVar4);
    switch(*pcVar4) {
    case '\0':
    case '\x05':
    case '\x0f':
    case '\x11':
      FUN_0045d247(*(undefined2 *)(pcVar4 + 2));
      FUN_0045d247(*(undefined2 *)(pcVar4 + 4));
      FUN_0045d247(*(undefined2 *)(pcVar4 + 6));
      FUN_0045d247(*(undefined2 *)(pcVar4 + 8));
      FUN_0045d247(*(undefined2 *)(pcVar4 + 0xc));
      if (*pcVar4 == '\x0f') {
        uVar2 = *(undefined2 *)(pcVar4 + 0xe);
        goto LAB_005e4291;
      }
      break;
    case '\x01':
    case '\x02':
    case '\x06':
    case '\f':
    case '\r':
    case '\x10':
      FUN_0045d247(*(undefined2 *)(pcVar4 + 6));
      uVar2 = *(undefined2 *)(pcVar4 + 8);
      goto LAB_005e4319;
    case '\x03':
    case '\x04':
    case '\a':
    case '\b':
    case '\t':
    case '\v':
      FUN_0045d247(*(undefined2 *)(pcVar4 + 2));
      FUN_0045d247(*(undefined2 *)(pcVar4 + 4));
      uVar2 = *(undefined2 *)(pcVar4 + 0xc);
LAB_005e4291:
      FUN_0045d247(uVar2);
      break;
    case '\n':
      goto switchD_005e41fc_caseD_a;
    case '\x0e':
      FUN_0045d247(*(undefined2 *)(pcVar4 + 6));
      FUN_0045d247(*(undefined2 *)(pcVar4 + 8));
      uVar2 = *(undefined2 *)(pcVar4 + 0xe);
LAB_005e4319:
      FUN_0045d247(uVar2);
    default:
      goto switchD_005e41fc_default;
    }
    if ((int)*(short *)(pcVar4 + 2) < *(int *)(param_1 + 0x30)) {
      *(int *)(param_1 + 0x30) = (int)*(short *)(pcVar4 + 2);
    }
    if ((int)*(short *)(pcVar4 + 4) < *(int *)(param_1 + 0x34)) {
      *(int *)(param_1 + 0x34) = (int)*(short *)(pcVar4 + 4);
    }
    if (*(int *)(param_1 + 0x38) < (int)*(short *)(pcVar4 + 2)) {
      *(int *)(param_1 + 0x38) = (int)*(short *)(pcVar4 + 2);
    }
    if (*(int *)(param_1 + 0x3c) < (int)*(short *)(pcVar4 + 4)) {
      *(int *)(param_1 + 0x3c) = (int)*(short *)(pcVar4 + 4);
    }
switchD_005e41fc_default:
    FUN_00457cda(pcVar4[10]);
    FUN_0045d247(*(undefined2 *)(pcVar4 + 0x10));
    pcVar4 = param_2;
  } while( true );
switchD_005e41fc_caseD_a:
  FUN_00457cda(pcVar4[0x12]);
  pcVar4 = param_2;
  goto joined_r0x005e41bd;
}


