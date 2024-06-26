#ifndef UE4SS_SDK_equipmentStat_HPP
#define UE4SS_SDK_equipmentStat_HPP

class UequipmentStat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* itemIcon;                                                           // 0x0268 (size: 0x8)
    class UTextBlock* statsTxt;                                                       // 0x0270 (size: 0x8)
    int32 goodID;                                                                     // 0x0278 (size: 0x4)

    void updateHas(int32 has);
    void updateStats(int32 has, int32 needs);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_equipmentStat(int32 EntryPoint);
}; // Size: 0x27C

#endif
