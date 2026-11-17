/* ptr_00416fbc - 0x00416fbc in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00416fbc(void)

{
  uint unaff_EBX;
  uint unaff_ESI;
  undefined4 *unaff_EDI;
  
  while( true ) {
    FUN_0041aabf();
    if (unaff_ESI <= unaff_EBX) break;
    unaff_EBX = unaff_EBX + 100;
  }
  return *unaff_EDI;
}


