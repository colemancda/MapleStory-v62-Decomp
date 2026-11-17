/* ptr_00826867 - 0x00826867 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00826867(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *unaff_EBX;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  int unaff_EBP;
  IBinding *unaff_ESI;
  int unaff_EDI;
  
  cVar2 = FUN_00829762();
  if (cVar2 == '\0') {
    if (DAT_0097c1ac == unaff_ESI) {
      FUN_00878dfb();
    }
    (**(code **)(*(int *)DAT_0097c1ac + 0x10))();
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(unaff_EBX,unaff_ESI);
  }
  (*DAT_0097b3ec)();
  FUN_00826a71();
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)&DAT_0097c1a8,unaff_ESI);
  this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)&DAT_0097c164;
  do {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,unaff_ESI);
    this = this + 4;
  } while ((int)this < 0x97c1a0);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)&DAT_0097c1a0,unaff_ESI);
  if (*(IBinding **)(unaff_EDI + 4) != unaff_ESI) {
    (*DAT_0097b534)(*(IBinding **)(unaff_EDI + 4));
    (*DAT_0097b518)(*(undefined4 *)(unaff_EDI + 4));
    puVar3 = (undefined4 *)FUN_00679d22(unaff_EBP + -0x14,0x48f);
    uVar1 = *puVar3;
    *(undefined4 *)(unaff_EBP + -4) = 1;
    uVar4 = (*DAT_0097b380)();
    (*DAT_0097b5e8)(uVar1,uVar4);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00414ebb();
    *(IBinding **)(unaff_EDI + 4) = unaff_ESI;
  }
  if (*(IBinding **)(unaff_EDI + 8) != unaff_ESI) {
    FUN_00672c45();
    *(IBinding **)(unaff_EDI + 8) = unaff_ESI;
  }
  if ((*(IBinding **)(unaff_EDI + 0x2c) == unaff_ESI) && (DAT_00973abc != unaff_ESI)) {
    FUN_0041ea74();
  }
  if (DAT_00978134 != unaff_ESI) {
    (*(code *)**(undefined4 **)DAT_00978134)();
  }
  FUN_0043cf43();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


