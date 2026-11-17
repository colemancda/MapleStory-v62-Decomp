/* FUN_00427e4d - 0x00427e4d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00427e4d(void)

{
  IBinding *pIVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  puVar2 = (undefined4 *)FUN_004363f8();
  pIVar1 = *(IBinding **)(unaff_EBP + 0x18);
  *puVar2 = *(undefined4 *)(unaff_EBP + 8);
  puVar2[1] = *(undefined4 *)(unaff_EBP + 0xc);
  puVar2[2] = *(undefined4 *)(unaff_EBP + 0x10);
  puVar2[3] = *(undefined4 *)(unaff_EBP + 0x14);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(puVar2 + 4),pIVar1);
  puVar2[6] = *(undefined4 *)(unaff_EBP + 0x1c);
  uVar3 = FUN_007d1e08();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  puVar2[5] = uVar3;
  if (pIVar1 != (IBinding *)0x0) {
    (**(code **)(*(int *)pIVar1 + 8))(pIVar1);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


