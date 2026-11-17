/* FUN_0079536d - 0x0079536d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0079536d(void)

{
  undefined4 *extraout_ECX;
  void *unaff_retaddr;
  
  FUN_00879bb8();
  *extraout_ECX = 0xffffffff;
  extraout_ECX[1] = 0xffffffff;
  extraout_ECX[2] = 0xffffffff;
  extraout_ECX[5] = 0;
  extraout_ECX[3] = 1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 5),(IBinding *)0x0);
  ExceptionList = unaff_retaddr;
  return extraout_ECX;
}


