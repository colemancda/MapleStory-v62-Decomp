/* DllGetClassObject - 0x51802e05 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


HRESULT DllGetClassObject(IID *rclsid,IID *riid,LPVOID *ppv)

{
  int iVar1;
  int *piVar2;
  
                    /* 0x2e05  2  DllGetClassObject */
  piVar2 = &DAT_51819cf0;
  iVar1 = wcscmp((wchar_t *)rclsid,u_Sound_DX8_5181e1ac);
  if (iVar1 != 0) {
    iVar1 = wcscmp((wchar_t *)rclsid,u_Sound_5181e1a0);
    if (iVar1 != 0) goto LAB_51802e39;
  }
  piVar2 = (int *)&DAT_5181e180;
LAB_51802e39:
  piVar2 = FUN_51803736((int *)&DAT_5181f88c,piVar2,riid,(int *)ppv);
  return (HRESULT)piVar2;
}


