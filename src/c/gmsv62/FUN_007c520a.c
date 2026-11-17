/* FUN_007c520a - 0x007c520a in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007c520a(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(extraout_ECX + 0x1e6c) = 0;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1e70),
             (IBinding *)0x0);
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x10,0x3b1);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00437222(uVar1,extraout_ECX + 0x1e74,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  *(undefined4 *)(extraout_ECX + 0x1e80) = 0;
  FUN_0051548c(0);
  *(undefined4 *)(extraout_ECX + 0x1e88) = 0;
  *(undefined4 *)(extraout_ECX + 0x1e8c) = 0;
  FUN_0051548c(0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1e94),
             (IBinding *)0x0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1e98),
             (IBinding *)0x0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1e9c),
             (IBinding *)0x0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1ea0),
             (IBinding *)0x0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1c),
             (IBinding *)0x0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(undefined4 *)(extraout_ECX + 0x1ebc) = 0;
  return;
}


