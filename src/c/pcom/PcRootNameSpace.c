/* PcRootNameSpace - 0x50c063bc in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl PcRootNameSpace(undefined4 *param_1,int param_2)

{
  int *piVar1;
  
                    /* 0x63bc  6  PcRootNameSpace */
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  FUN_50c026fc();
  piVar1 = DAT_50c1ca90;
  if (param_2 == 0) {
    *param_1 = DAT_50c1ca90;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
  }
  else {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)&DAT_50c1ca90,(IBinding *)*param_1
              );
  }
  _DAT_50c1ca8c = _DAT_50c1ca8c + -1;
  if (_DAT_50c1ca8c == 0) {
    DAT_50c1ca88 = 0;
  }
  return 0;
}


