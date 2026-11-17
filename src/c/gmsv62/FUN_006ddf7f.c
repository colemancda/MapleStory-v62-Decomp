/* FUN_006ddf7f - 0x006ddf7f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006ddf7f(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00815de9();
  }
  if (*(int *)(param_1 + 0x5b4) != 0) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(param_1 + 0x5b4),(IBinding *)0x0)
    ;
  }
  FUN_0045f536();
  FUN_006df0c9();
  return;
}


