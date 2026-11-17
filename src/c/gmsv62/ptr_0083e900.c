/* ptr_0083e900 - 0x0083e900 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0083e900(void)

{
  int iVar1;
  LONG LVar2;
  int unaff_ESI;
  
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_ESI + 4) + 8;
  }
  LVar2 = InterlockedDecrement((LONG *)(iVar1 + 4));
  if (LVar2 == 0) {
    InterlockedIncrement
              ((LONG *)((-(uint)(*(int *)(unaff_ESI + 4) != 0) & *(int *)(unaff_ESI + 4) + 8U) + 4))
    ;
    if (*(int *)(unaff_ESI + 4) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(unaff_ESI + 4) + 8;
    }
    FUN_0040294d(iVar1);
  }
  return;
}


