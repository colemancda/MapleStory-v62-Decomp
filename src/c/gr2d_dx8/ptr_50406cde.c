/* ptr_50406cde - 0x50406cde in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 ptr_50406cde(undefined4 param_1,void *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  ppuVar2 = &PTR_DAT_50435498;
  do {
    iVar1 = memcmp(*ppuVar2,param_2,0x10);
    if (iVar1 == 0) {
      return 0;
    }
    ppuVar2 = ppuVar2 + 1;
  } while (ppuVar2 < u_Invalid_format_5043549c);
  return 1;
}


