/* FUN_007d6beb - 0x007d6beb in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007d6beb(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)&DAT_0097c094;
  do {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)0x0);
    this = this + 4;
  } while ((int)this < 0x97c15c);
  return;
}


