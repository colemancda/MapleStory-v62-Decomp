/* FUN_00402bc3 - 0x00402bc3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


HRESULT FUN_00402bc3(VARIANTARG *param_1)

{
  int iVar1;
  HRESULT HVar2;
  
  if ((param_1->n1).n2.vt == 8) {
    (param_1->n1).n2.vt = 0;
    iVar1 = *(int *)((int)&param_1->n1 + 8);
    if (iVar1 != 0) {
      (*DAT_0097b650)(iVar1 + -4);
    }
    return 0;
  }
  HVar2 = VariantClear(param_1);
  return HVar2;
}


