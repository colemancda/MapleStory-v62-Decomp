/* ptr_00445bed - 0x00445bed in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00445bed(void)

{
  undefined4 *unaff_EBX;
  uint unaff_ESI;
  uint unaff_EDI;
  
  do {
    unaff_EDI = unaff_EDI + 0x14;
    FUN_00446b89();
  } while (unaff_EDI < unaff_ESI);
  return *unaff_EBX;
}


