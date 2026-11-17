/* FUN_0088856a - 0x0088856a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0088856a(short param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)&DAT_00973294;
  do {
    if (param_1 == *(short *)ppuVar1) {
      return 0;
    }
    ppuVar1 = (undefined **)((int)ppuVar1 + 2);
  } while (ppuVar1 < &PTR_s_america_009732a8);
  return 1;
}


