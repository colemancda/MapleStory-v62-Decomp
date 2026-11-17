/* ptr_0043491f - 0x0043491f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_0043491f(void)

{
  int iVar1;
  uint unaff_ESI;
  
  do {
    FUN_00437086();
    do {
      if (unaff_ESI == 0) {
        return;
      }
      iVar1 = *(int *)((-(uint)(unaff_ESI != 0) & unaff_ESI - 0x10) + 4);
      unaff_ESI = -(uint)(iVar1 != 0) & iVar1 + 0x10U;
      iVar1 = FUN_00431693();
    } while (iVar1 == 0);
  } while( true );
}


