/* FUN_00883a76 - 0x00883a76 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


uint FUN_00883a76(ushort param_1,ushort param_2)

{
  int iVar1;
  uint local_8;
  
  if (param_1 == 0xffff) {
    return 0;
  }
  if (param_1 < 0x100) {
    local_8 = (uint)*(ushort *)(PTR_DAT_009726f4 + (uint)param_1 * 2);
  }
  else {
    iVar1 = FUN_00888761(1,&param_1,1,&local_8,0,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return local_8 & 0xffff & (uint)param_2;
}


