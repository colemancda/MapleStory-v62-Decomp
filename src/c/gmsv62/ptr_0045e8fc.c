/* ptr_0045e8fc - 0x0045e8fc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0045e8fc(void)

{
  int iVar1;
  int unaff_ESI;
  
  InterlockedIncrement
            ((LONG *)((-(uint)(*(int *)(unaff_ESI + 4) != 0) & *(int *)(unaff_ESI + 4) + 8U) + 4));
  if (*(int *)(unaff_ESI + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(unaff_ESI + 4) + 8;
  }
  FUN_0040294d(iVar1);
  return;
}


