/* FUN_0045bf10 - 0x0045bf10 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045bf10(void)

{
  int *local_8;
  
  FUN_0081622a(0);
  FUN_00448dc6(&local_8);
  if (local_8 != (int *)0x0) {
    (**(code **)(*local_8 + 8))(local_8);
  }
  return;
}


