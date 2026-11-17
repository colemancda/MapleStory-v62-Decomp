/* FUN_00429303 - 0x00429303 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00429303(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_009796d4;
  if (DAT_009796d4 != 0) {
    iVar2 = (**(code **)(*(int *)(DAT_009796d4 + 4) + 0x48))(&DAT_00979240);
    if (iVar2 != 0) {
      return iVar1;
    }
  }
  return 0;
}


