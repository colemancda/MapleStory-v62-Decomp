/* FUN_0062e793 - 0x0062e793 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_0062e793(void)

{
  int iVar1;
  uint local_8;
  
  iVar1 = FUN_0062fdf4(&stack0x00000004,&local_8);
  return -(uint)(iVar1 != 0) & local_8;
}


