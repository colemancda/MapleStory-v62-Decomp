/* FUN_005df4cb - 0x005df4cb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_005df4cb(void)

{
  uint local_8;
  
  local_8 = 0;
  FUN_005e090e(&stack0x00000004,&local_8);
  return local_8 & 0xffff;
}


