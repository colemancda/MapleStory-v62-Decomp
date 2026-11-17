/* ptr_005cc4e8 - 0x005cc4e8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint ptr_005cc4e8(void)

{
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  
  return unaff_ESI << 1 | *(int *)(unaff_EBP + 8) < unaff_EDI & unaff_EBX;
}


