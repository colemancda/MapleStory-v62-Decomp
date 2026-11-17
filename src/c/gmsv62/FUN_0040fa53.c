/* FUN_0040fa53 - 0x0040fa53 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0040fa53(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int unaff_EBP;
  int iVar5;
  
  FUN_00879bb8();
  piVar2 = *(int **)(unaff_EBP + 0xc);
  iVar5 = 0;
  if (*piVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*piVar2 + -4);
  }
  FUN_00416fcc(*(undefined4 *)(unaff_EBP + -0x10),1,unaff_EBP + 0xf);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  if (0 < *(int *)(unaff_EBP + -0x10)) {
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    while( true ) {
      iVar3 = FUN_004029b9(0x38);
      *(int *)(unaff_EBP + -0x18) = iVar3;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_0040fb61();
      }
      *(int *)(unaff_EBP + -0x1c) = iVar3;
      iVar4 = 0;
      if (iVar3 != 0) {
        InterlockedIncrement((LONG *)(iVar3 + 4));
        iVar4 = *(int *)(unaff_EBP + -0x1c);
      }
      *(undefined4 *)(unaff_EBP + -4) = 1;
      FUN_00401def(iVar4 + 0xc,iVar4 + 0x10,iVar4 + 0x28,unaff_EBP + -0x28,iVar4 + 0x30,1);
      *(undefined4 *)(*(int *)(unaff_EBP + -0x1c) + 0x24) = *(undefined4 *)(*piVar2 + 0x50 + iVar5);
      puVar1 = (undefined4 *)(*piVar2 + 0x54 + iVar5);
      iVar5 = *(int *)(unaff_EBP + -0x1c);
      *(undefined4 *)(iVar5 + 0x14) = *puVar1;
      *(undefined4 *)(iVar5 + 0x18) = puVar1[1];
      *(undefined4 *)(iVar5 + 0x1c) = puVar1[2];
      *(undefined4 *)(iVar5 + 0x20) = puVar1[3];
      iVar5 = *(int *)(unaff_EBP + -0x14);
      FUN_00411d7e(unaff_EBP + -0x20);
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_00413339(0);
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 100;
      iVar5 = iVar5 + 1;
      *(int *)(unaff_EBP + -0x14) = iVar5;
      if (*(int *)(unaff_EBP + -0x10) <= iVar5) break;
      iVar5 = *(int *)(unaff_EBP + 0xc);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


