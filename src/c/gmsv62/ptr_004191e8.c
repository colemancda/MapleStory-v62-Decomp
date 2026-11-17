/* ptr_004191e8 - 0x004191e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_004191e8(void)

{
  LONG *lpAddend;
  LONG LVar1;
  int *unaff_ESI;
  LONG *unaff_EDI;
  
  InterlockedIncrement(unaff_EDI);
  if (*unaff_ESI != 0) {
    lpAddend = (LONG *)(*unaff_ESI + -0xc);
    LVar1 = InterlockedDecrement(lpAddend);
    if (LVar1 < 1) {
      FUN_004054e1(lpAddend);
    }
  }
  *unaff_ESI = (int)(unaff_EDI + 3);
  return;
}


