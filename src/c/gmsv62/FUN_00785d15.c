/* FUN_00785d15 - 0x00785d15 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00785d15(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x50) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  iVar5 = *(int *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x10) = iVar5;
  if (iVar5 <= *(int *)(unaff_EBP + 0x10)) {
    iVar5 = iVar5 << 6;
    piVar1 = *(int **)(unaff_EBP + 8);
    *(int *)(unaff_EBP + -0x14) = iVar5;
    do {
      iVar4 = *(int *)(unaff_EBP + -0x10);
      FUN_00772d62(*piVar1 + iVar5);
      if (*(int *)(unaff_EBP + 0xc) < iVar4) {
        do {
          iVar2 = *(int *)(*piVar1 + iVar5 + -0x3c);
          if (iVar2 == 0) {
            iVar2 = DAT_00980dfc;
          }
          iVar3 = DAT_00980dfc;
          if (*(int *)(unaff_EBP + -0x50) != 0) {
            iVar3 = *(int *)(unaff_EBP + -0x50);
          }
          iVar2 = FUN_008858f0(iVar3,iVar2);
          if (-1 < iVar2) break;
          FUN_00772d62(*piVar1 + iVar5 + -0x40);
          iVar4 = iVar4 + -1;
          iVar5 = iVar5 + -0x40;
        } while (*(int *)(unaff_EBP + 0xc) < iVar4);
        iVar5 = *(int *)(unaff_EBP + -0x14);
      }
      FUN_00772d62(unaff_EBP + -0x54);
      *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
      iVar5 = iVar5 + 0x40;
      *(int *)(unaff_EBP + -0x14) = iVar5;
    } while (*(int *)(unaff_EBP + -0x10) <= *(int *)(unaff_EBP + 0x10));
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00770582();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


