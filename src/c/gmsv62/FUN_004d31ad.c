/* FUN_004d31ad - 0x004d31ad in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall FUN_004d31ad(_CIP<IBinding,&struct__GUID_const_IID_IBinding> *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *param_2;
  if (iVar3 == 0) {
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(param_1,(IBinding *)0x0);
    iVar3 = -0x7fffbffe;
  }
  else {
    iVar3 = (*(code *)**(undefined4 **)(iVar3 + 0xc))(iVar3 + 0xc,&DAT_00963de8,&param_2);
    piVar1 = param_2;
    if (iVar3 < 0) {
      piVar1 = *(int **)param_1;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      *(undefined4 *)param_1 = 0;
    }
    else {
      piVar2 = *(int **)param_1;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 8))(piVar2);
      }
      *(int **)param_1 = piVar1;
    }
  }
  return iVar3;
}


