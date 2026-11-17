/* FUN_007d2b71 - 0x007d2b71 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d2b71(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int iVar4;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_0045f10c();
  FUN_0047266d(1,unaff_EBP + 0xb);
  iVar4 = 0;
  while( true ) {
    iVar2 = *(int *)(unaff_EBP + 0xc);
    if (iVar2 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(iVar2 + -4);
    }
    if (iVar3 <= iVar4) break;
    if ((*(char *)(iVar2 + iVar4) == '\r') && (*(char *)(iVar2 + iVar4 + 1) == '\n')) {
      iVar2 = 0;
      if (*piVar1 != 0) {
        iVar2 = *(int *)(*piVar1 + -4);
      }
      FUN_0046691d(iVar2 + 1,0,unaff_EBP + -0xd);
      iVar4 = iVar4 + 1;
    }
    else {
      *(char *)(unaff_EBP + 0xb) = *(char *)(iVar2 + iVar4);
      FUN_0045efbb(unaff_EBP + 0xb,1);
    }
    iVar4 = iVar4 + 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


