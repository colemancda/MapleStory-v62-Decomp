/* ptr_00434de5 - 0x00434de5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00434de5(void)

{
  LONG *in_EAX;
  LONG LVar1;
  int iVar2;
  int unaff_ESI;
  
  LVar1 = InterlockedDecrement(in_EAX);
  if (LVar1 == 0) {
    InterlockedIncrement
              ((LONG *)((-(uint)(*(int *)(unaff_ESI + 4) != 0) & *(int *)(unaff_ESI + 4) + 8U) + 4))
    ;
    if (*(int *)(unaff_ESI + 4) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(unaff_ESI + 4) + 8;
    }
    FUN_0040294d(iVar2);
  }
  return;
}


