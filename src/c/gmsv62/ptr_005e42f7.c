/* ptr_005e42f7 - 0x005e42f7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_005e42f7(void)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  int unaff_EBP;
  int unaff_ESI;
  char *unaff_EDI;
  uint uVar8;
  
code_r0x005e42f7:
  FUN_0045d247(*(undefined2 *)(unaff_EDI + 6));
  FUN_0045d247(*(undefined2 *)(unaff_EDI + 8));
  uVar2 = *(undefined2 *)(unaff_EDI + 0xe);
LAB_005e4319:
  FUN_0045d247(uVar2);
switchD_005e41fc_default:
  FUN_00457cda(unaff_EDI[10]);
  FUN_0045d247(*(undefined2 *)(unaff_EDI + 0x10));
  do {
    if (*(int *)(unaff_EBP + 8) == 0) {
      if (*(int *)(unaff_ESI + 0x24) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(*(int *)(unaff_ESI + 0x24) + -4);
      }
      FUN_00457cda(uVar6);
      for (uVar8 = 0;
          (iVar3 = *(int *)(unaff_ESI + 0x24), iVar3 != 0 && (uVar8 < *(uint *)(iVar3 + -4)));
          uVar8 = uVar8 + 2) {
        iVar4 = *(int *)(unaff_ESI + 0x24);
        bVar5 = *(byte *)(iVar3 + uVar8) & 0xf;
        *(byte *)(unaff_EBP + 8) = bVar5;
        iVar7 = 0;
        if (iVar4 != 0) {
          iVar7 = *(int *)(iVar4 + -4);
        }
        if (uVar8 != iVar7 - 1U) {
          *(byte *)(unaff_EBP + 8) = bVar5 | ((byte *)(iVar3 + uVar8))[1] << 4;
        }
        FUN_00457cda(*(undefined4 *)(unaff_EBP + 8));
      }
      FUN_0045d247(*(undefined2 *)(unaff_ESI + 0x30));
      FUN_0045d247(*(undefined2 *)(unaff_ESI + 0x34));
      FUN_0045d247(*(undefined2 *)(unaff_ESI + 0x38));
      FUN_0045d247(*(undefined2 *)(unaff_ESI + 0x3c));
      return;
    }
    unaff_EDI = *(char **)(unaff_EBP + 8);
    iVar3 = *(int *)((-(uint)(unaff_EDI != (char *)0x0) & (uint)(unaff_EDI + -0x10)) + 4);
    cVar1 = *unaff_EDI;
    *(uint *)(unaff_EBP + 8) = -(uint)(iVar3 != 0) & iVar3 + 0x10U;
    FUN_00457cda(cVar1);
    switch(*unaff_EDI) {
    case '\0':
    case '\x05':
    case '\x0f':
    case '\x11':
      goto ptr_005e4203;
    case '\x01':
    case '\x02':
    case '\x06':
    case '\f':
    case '\r':
    case '\x10':
      FUN_0045d247(*(undefined2 *)(unaff_EDI + 6));
      uVar2 = *(undefined2 *)(unaff_EDI + 8);
      goto LAB_005e4319;
    case '\x03':
    case '\x04':
    case '\a':
    case '\b':
    case '\t':
    case '\v':
      FUN_0045d247(*(undefined2 *)(unaff_EDI + 2));
      FUN_0045d247(*(undefined2 *)(unaff_EDI + 4));
      uVar2 = *(undefined2 *)(unaff_EDI + 0xc);
      goto LAB_005e4291;
    case '\n':
      FUN_00457cda(unaff_EDI[0x12]);
      break;
    case '\x0e':
      goto code_r0x005e42f7;
    default:
      goto switchD_005e41fc_default;
    }
  } while( true );
ptr_005e4203:
  FUN_0045d247(*(undefined2 *)(unaff_EDI + 2));
  FUN_0045d247(*(undefined2 *)(unaff_EDI + 4));
  FUN_0045d247(*(undefined2 *)(unaff_EDI + 6));
  FUN_0045d247(*(undefined2 *)(unaff_EDI + 8));
  FUN_0045d247(*(undefined2 *)(unaff_EDI + 0xc));
  if (*unaff_EDI == '\x0f') {
    uVar2 = *(undefined2 *)(unaff_EDI + 0xe);
LAB_005e4291:
    FUN_0045d247(uVar2);
  }
  if ((int)*(short *)(unaff_EDI + 2) < *(int *)(unaff_ESI + 0x30)) {
    *(int *)(unaff_ESI + 0x30) = (int)*(short *)(unaff_EDI + 2);
  }
  if ((int)*(short *)(unaff_EDI + 4) < *(int *)(unaff_ESI + 0x34)) {
    *(int *)(unaff_ESI + 0x34) = (int)*(short *)(unaff_EDI + 4);
  }
  if (*(int *)(unaff_ESI + 0x38) < (int)*(short *)(unaff_EDI + 2)) {
    *(int *)(unaff_ESI + 0x38) = (int)*(short *)(unaff_EDI + 2);
  }
  if (*(int *)(unaff_ESI + 0x3c) < (int)*(short *)(unaff_EDI + 4)) {
    *(int *)(unaff_ESI + 0x3c) = (int)*(short *)(unaff_EDI + 4);
  }
  goto switchD_005e41fc_default;
}


